#pragma once
#include "Coordinate2D.h"

enum struct type
{
	none, pawn, rook, knight, bishop, queen, king
};
class ChessPiece
{
public:
	type chess;
	short team;//0 none 1 white 2 black
	short canMove2tiles;//only for pawn, 0 can't 1 can 2 can't cuz just did dat

	static const ChessPiece* getPointer(const char& c);

	const char& toChar();

	ChessPiece();
	ChessPiece(const type& a, const short& p, const short& c = 0);
	ChessPiece(const ChessPiece& cp);
};

const ChessPiece tile_blank(type::none, 0);
const ChessPiece pawn_w0(type::pawn, 1);
const ChessPiece pawn_b0(type::pawn, 2);
const ChessPiece pawn_w1(type::pawn, 1, 1);
const ChessPiece pawn_b1(type::pawn, 2, 1);
const ChessPiece pawn_w2(type::pawn, 1, 2);
const ChessPiece pawn_b2(type::pawn, 2, 2);
const ChessPiece rook_w(type::rook, 1);
const ChessPiece rook_b(type::rook, 2);
const ChessPiece knight_w(type::knight, 1);
const ChessPiece knight_b(type::knight, 2);
const ChessPiece bishop_w(type::bishop, 1);
const ChessPiece bishop_b(type::bishop, 2);
const ChessPiece queen_w(type::queen, 1);
const ChessPiece queen_b(type::queen, 2);
const ChessPiece king_w(type::king, 1);
const ChessPiece king_b(type::king, 2);

