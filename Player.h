#pragma once
#include "Coordinate2D.h"
#include <vector>
class GameManager;

class Player
{
private:
	GameManager* game;
	int no;
	std::vector<std::vector<Coordinate2D>> possible_chosen_tile;
	
public:
	bool setGame(const GameManager*& gameSauce);
	void set_possible_chosen_tile();
	bool set_chosen_tile(const char*& tile);
};

