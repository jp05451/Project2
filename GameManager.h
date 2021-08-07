#pragma once
#include <vector>
#include <fstream>
#include "Player.h"
#include "Coordinate2D.h"
#include "ChessPiece.h"
#include <string>
class GameManager
{
private:
	std::vector<std::vector<ChessPiece>> tile;
	Player * p[2];
	int turn;
	std::fstream log_file;
	int rounds_before_draw;//fifty-move rule applys here
	int startNewGame();

public:
	GameManager();
	int start2PlayerGame();
	bool setBoard(const std::vector<std::vector<ChessPiece>>& tile);
	bool setBoard(const std::string& tile);
	const std::vector<std::vector<ChessPiece>>& getBoard();
};

