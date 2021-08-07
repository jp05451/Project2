#include "ChessPiece.h"

const ChessPiece* ChessPiece::getPointer(const char& c)
{
	if (c == '0') {
		return &tile_blank;
		
	}
	else if (c == 'P') {
		return &pawn_w1;
		
	}
	else if (c == 'p') {
		return &pawn_b1;
		
	}
	else if (c == 'R') {
		return &rook_w;
		
	}
	else if (c == 'r') {
		return &rook_b;
		
	}
	else if (c == 'H') {
		return &knight_w;
		
	}
	else if (c == 'h') {
		return &knight_b;
		
	}
	else if (c == 'B') {
		return &bishop_w;
		
	}
	else if (c == 'b') {
		return &bishop_b;
		
	}
	else if (c == 'Q') {
		return &queen_w;
		
	}
	else if (c == 'q') {
		return &queen_b;
		
	}
	else if (c == 'K') {
		return &king_w;
		
	}
	else if (c == 'k') {
		return &king_b;
		
	}
	return nullptr;
}

const char& ChessPiece::toChar()
{
	ChessPiece temp(chess,team,canMove2tiles);
	if ( temp.chess == type::none)return '0';
	else if ( temp.chess == type::pawn) {
		if (team == 1)return 'P';
		else if (team == 2)return 'p';
	}
	else if ( temp.chess == type::rook) {
		if (team == 1)return 'R';
		else if (team == 2)return 'r';
	}
	else if ( temp.chess == type::knight) {
		if (team == 1)return 'H';
		else if (team == 2)return 'h';
	}
	else if ( temp.chess == type::bishop) {
		if (team == 1)return 'B';
		else if (team == 2)return 'b';
	}
	else if ( temp.chess == type::queen) {
		if (team == 1)return 'Q';
		else if (team == 2)return 'q';
	}
	else if ( temp.chess == type::king) {
		if (team == 1)return 'K';
		else if (team == 2)return 'k';
	}
}

ChessPiece::ChessPiece()
{
	chess = type::none;
	team = -1;
	canMove2tiles = 0;
}

ChessPiece::ChessPiece(const type& a, const short& p, const short& c)
{
	chess = a;
	team = p;
	canMove2tiles = c;
}

ChessPiece::ChessPiece(const ChessPiece& cp)
{
	chess = cp.chess;
	team = cp.team;
	canMove2tiles = cp.canMove2tiles;
}
