#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>


uint64_t generateFileMask(int file){
	uint64_t ans = 0b1000000010000000100000001000000010000000100000001000000010000000;
	return ans  >> (8-file);
}
uint64_t generateFileClear(int file){
	uint64_t big = UINT64_MAX;
	uint64_t ans = generateFileMask(file);
	return big ^ ans;
}


uint64_t generateRankMask(int rank){
	uint64_t ans = 0b1111111100000000000000000000000000000000000000000000000000000000;
	return ans >> 8*(rank-1);
}
uint64_t generateRankClear(int rank){
	uint64_t big = UINT64_MAX;
	uint64_t ans = generateRankMask(rank);
	return big ^ ans;
}


void generateMaskClear(FILE* fp){
	char alphab[10] = "zABCDEFGH";
	for(int i = 1; i <= 8; i++){
		fprintf(fp, "extern const uint64_t MASK_%d = %" PRIu64 ";\n", i, generateRankMask(i));
		//printBoard(fp, generateRankMask(i));
	}
	//fprintf(fp, "\n");
	for(int i = 1; i <= 8; i++){
		fprintf(fp, "extern const uint64_t MASK_%c = %" PRIu64 ";\n", alphab[i], generateFileMask(i));
		//printBoard(fp, generateFileMask(i));
	}
	//fprintf(fp, "\n");
	for(int i = 1; i <= 8; i++){
		fprintf(fp, "extern const uint64_t CLEAR_%d = %" PRIu64 ";\n", i, generateRankClear(i));
		//printBoard(fp, generateRankClear(i));
	}
	//fprintf(fp, "\n");
	for(int i = 1; i <= 8; i++){
		fprintf(fp, "extern const uint64_t CLEAR_%c = %" PRIu64 ";\n", alphab[i], generateFileClear(i));
		//printBoard(fp, generateFileClear(i));
	}
	//fprintf(fp, "\n");

}

void generateBoardPositions(FILE* fp){
	//generate single board positions
	char alphab[10] = "zABCDEFGH";
	uint64_t value = 1;
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++){
			fprintf(fp, "extern const uint64_t %c%d = %" PRIu64 ";\n", alphab[j], i, value);
			value = value << 1;
		}	
	}
}


void generate(){
	FILE* fp;
	fp = fopen("generate-ed.txt","w"); 


	generateBoardPositions(fp);
	fprintf(fp, "\n");
	generateMaskClear(fp);

	fclose(fp);
}