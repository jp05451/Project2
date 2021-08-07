#pragma once
#include "ChessPiece.h"
#include <iostream>
#include <vector>
class ChessBoard
{
private:
	const ChessPiece* tile[8][8];
	bool castlingShort_available[2];
	bool castlingLong_available[2];
public:
	ChessBoard();

	void reset();
	ChessPiece getTile(const size_t& x, const size_t& y);
	friend std::ostream& operator<<(std::ostream& ost, ChessBoard board);

	//const std::vector<Move2D>& getViableMove(const short& team);
};

typedef struct Move2D {
	int fromX, fromY, toX, toY;
	Move2D();
	Move2D(const int& x1, const int& y1, const int& x2, const int& y2);
}Move2D;

