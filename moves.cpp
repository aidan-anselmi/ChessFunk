#include "board.c"
#include "generate.c"
#include "consts.c"
#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>
#include <vector>

/*
returns: a bitBoard with 1's on valid positions the king can move
			****currently ignores enemy check
*/
uint64_t unfilteredKingMoves(uint64_t start, bitBoard* board){
	/* 
	A king can move 1 tile in any direction

	move locations relative to the king
	0 1 2
	7 K 3
	6 5 4
	*/

	//bitwise and with certain clears to prevent going from
	//files A<->H or ranks 1<->8
	//left shift
	uint64_t move0 = start << 9 & CLEAR_8 & CLEAR_A;
	uint64_t move1 = start << 8 & CLEAR_8;
	uint64_t move2 = start << 7 & CLEAR_8 & CLEAR_H;
	uint64_t move7 = start << 1 & CLEAR_A;
	//right shift
	uint64_t move3 = start >> 1 & CLEAR_H;
	uint64_t move4 = start >> 9 & CLEAR_H & CLEAR_1;
	uint64_t move5 = start >> 8 & CLEAR_1;
	uint64_t move6 = start >> 7 & CLEAR_1 & CLEAR_A;

	uint64_t king_moves = move0 | move1 | move2 | move3 | 
						  move4 | move5 | move6 | move7;

	uint64_t king_valid = king_moves & (!board->white_pieces);
	
	return king_valid;
}

uint64_t unfilteredKnightMoves(uint64_t start, bitBoard* board){



}

int main(){
	generate();

	return 0;
}
