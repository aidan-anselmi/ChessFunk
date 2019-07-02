#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>





void printBoard(FILE* fp, uint64_t board){
	
	int i = 0;
	while (board || i < 64) {
		//newline
		if(i % 8 == 0 && i != 0){
			fprintf(fp, "\n");
		}

		//if num is not over
		if(board){
			if (board & 1)
			    fprintf(fp, "1 ");
			else
			    fprintf(fp, "0 ");
		}
		//if num is over
		else{
			fprintf(fp, "0 ");
		}
		
		//increment
		board >>= 1;
		i++;
	}
	fprintf(fp, "\n");
}

void printBoard(uint64_t board){
	int i = 0;
	while (board || i < 64) {
		//newline
		if(i % 8 == 0 && i != 0){
			printf("\n");
		}

		//if num is not over
		if(board){
			if (board & 1)
			    printf("1 ");
			else
			    printf("0 ");
		}
		//if num is over
		else{
			printf("0 ");
		}
		
		//increment
		board >>= 1;
		i++;
	}
	printf("\n");
}



struct bitBoard
{
	/* The white piece positions */
	uint64_t white_pawns;
	uint64_t white_rooks;
	uint64_t white_knights;
	uint64_t white_bishops;
	uint64_t white_queens;
	uint64_t white_king;

	/* The black piece positions */
	uint64_t black_pawns;
	uint64_t black_rooks;
	uint64_t black_knights;
	uint64_t black_bishops;
	uint64_t black_queens;
	uint64_t black_king;

	/* Commonly derived positions */
	uint64_t white_pieces;
	uint64_t black_pieces;
	uint64_t all_pieces;
};

