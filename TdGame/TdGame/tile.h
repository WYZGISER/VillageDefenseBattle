#ifndef _TILE_H
#define _TILE_H

#include<vector>

#define SIZE_TILE 48
struct Tile {
	enum class Direaction
	{
		None = 0,
		Up,
		Down,
		Left,
		Right
	};
	int terrian = 0;
	int decoration = -1;
	int special_flag = -1;
	Direaction direction = Direaction::None;
	bool has_tower = false;
};

typedef std::vector<std::vector<Tile>> TileMap;
#endif // !_TILE_H
