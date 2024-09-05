#pragma once
#include <array>
#include "string"
#include <iostream>

class Game
{
public:
	Game();
	void printGrid();
	void placeMarker();
	void checkPosition(int row, int column);

private:
	std::array< std::array<std::string, 5>, 5> grid{ "" };

};

