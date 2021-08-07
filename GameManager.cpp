
#include "GameManager.h"

GameManager::GameManager()
{
	tile.reserve(8);
	const std::vector<ChessPiece> column = { tile_blank, tile_blank, tile_blank, tile_blank, tile_blank, tile_blank, tile_blank, tile_blank};
	for (int i = 0; i < 8; i++)tile.push_back(column);
	p[0] = NULL;
}

const std::vector<std::vector<ChessPiece>>& GameManager::getBoard()
{
	return tile;
}
