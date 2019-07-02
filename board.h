#include "base.h"



class Board{

public:

	Board();
	Board(Board* other);

	void print();
	void print(FILE* fp);



	/*
	The design choice was made to allocate memory on the heap for 
	the ints because each board is 120 bytes, and if we are generating
	millions of boards then that will use up a lot of memory
	*/
	
	/* The white piece positions */
	uint64_t* white_pawns;
	uint64_t* white_rooks;
	uint64_t* white_knights;
	uint64_t* white_bishops;
	uint64_t* white_queens;
	uint64_t* white_king;

	/* The black piece positions */
	uint64_t* black_pawns;
	uint64_t* black_rooks;
	uint64_t* black_knights;
	uint64_t* black_bishops;
	uint64_t* black_queens;
	uint64_t* black_king;

	/* Commonly derived positions */
	uint64_t* white_pieces;
	uint64_t* black_pieces;
	uint64_t* all_pieces;

};


