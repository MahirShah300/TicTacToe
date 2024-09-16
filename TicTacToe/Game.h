#pragma once
#include <array>
#include "string"
#include <iostream>
#include "Marker.h"

enum ROW {
	FIRSTROW = 0,
	SECONDROW = 2,
	THIRDROW = 4,
};


class Game
{
public:
	Game();
	void printGrid();
	void printGridMarker();
	void placeMarker();
	void placeMarkerMark();
	bool checkPositionOpen(ROW row, int column, bool& correctChoice);
	bool checkPositionOpenMarker(ROW row, int column, bool& correctChoice);

private:
	std::array< std::array<Marker, 5>, 5> gridMarker;
	std::array< std::array<std::string, 5>, 5> grid{ "" };
	PLAYER whichPlayer;

};

