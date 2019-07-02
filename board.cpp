#include "board.h"



Board::Board(){
	//allocate memory on the heap for each 64 bit integer
	white_pawns = new uint64_t;
	white_rooks = new uint64_t;
	white_knights = new uint64_t;
	white_bishops = new uint64_t;
	white_queens = new uint64_t;
	white_king = new uint64_t;
	black_pawns = new uint64_t;
	black_rooks = new uint64_t;
	black_knights = new uint64_t;
	black_bishops = new uint64_t;
	black_queens = new uint64_t;
	black_king = new uint64_t;
	white_pieces = new uint64_t;
	black_pieces = new uint64_t;
	all_pieces = new uint64_t;

	//set each int to its starting value
	*white_pawns = white_pawns_start;
	*white_rooks = white_rooks_start;
	*white_knights = white_knights_start;
	*white_bishops = white_bishops_start;
	*white_queens = white_queens_start;
	*white_king = white_king_start;
	*black_pawns = black_pawns_start;
	*black_rooks = black_rooks_start;
	*black_knights = black_knights_start;
	*black_bishops = black_bishops_start;
	*black_queens = black_queens_start;
	*black_king = black_king_start;
	*white_pieces = white_pieces_start;
	*black_pieces = black_pieces_start;
	*all_pieces = all_pieces_start;
}




ostream& operator<<(ostream& os, const Board b)
{

	for(int i = 0; i < 64; i++){
		b.all_pieces;
	}


	return os;
}




int main(){



}