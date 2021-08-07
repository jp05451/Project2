#include "ChessBoard.h"
#include <fstream>
#include <string>

ChessBoard::ChessBoard()
{
	reset();
}

void ChessBoard::reset()
{
	castlingShort_available[0] = 1;
	castlingShort_available[1] = 1;
	castlingLong_available[0] = 1;
	castlingLong_available[1] = 1;
	std::ifstream input_board;
	input_board.open("DefaultBoard.txt");
	int row = 7, column = 0;
	std::string buffer;
	while (std::getline(input_board,buffer)&&row>=0) {
		if (buffer[0] == '/')continue;
		while (!buffer.empty()) {
			tile[column][row] = ChessPiece::getPointer(buffer[0]);
			buffer.erase(buffer.begin());
			if (tile[column][row] != nullptr) {
				column++;
				if (column > 7) {
					column = 0;
					row--;
					if (row < 0)break;
				}
			}

		}
	}

	input_board.close();
	return;
}

ChessPiece ChessBoard::getTile(const size_t& x, const size_t& y)
{
	if (x < 8 && y < 8)
		return *tile[x][y];
	else
		return tile_blank;
}

/*const std::vector<Move2D>& ChessBoard::getViableMove(const short& team)
{
	std::vector<Move2D> list;
	list.reserve(200);
	int row = 7, column = 0;
	while (row > 0) {
		if (tile[column][row]->team == team) {
			int fromX = column, fromY = row;
			if (tile[column][row]->chess == type::pawn) {

			}
		}
	}
}*/

std::ostream& operator<<(std::ostream& ost, ChessBoard board)
{
	int column = 0, row = 7;
	while (row >= 0) {
		ChessPiece temp(*board.tile[column][row]);
		ost << temp.toChar();
		column++;
		if (column > 7) {
			ost << "\n";
			column = 0;
			row--;
		}
	}
	return ost;
}
