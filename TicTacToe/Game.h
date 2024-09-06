#pragma once
#include <array>
#include "string"
#include <iostream>

enum ROW {
	FIRSTROW = 0,
	SECONDROW = 2,
	THIRDROW = 4,
};

enum PLAYER {
	PLAYERONE,
	PLAYERTWO
};

class Game
{
public:
	Game();
	void printGrid();
	void placeMarker();
	bool checkPositionOpen(ROW row, int column, bool& correctChoice);

private:
	std::array< std::array<std::string, 5>, 5> grid{ "" };
	PLAYER whichPlayer;

};

