#pragma once
#include <array>
#include "string"
#include <iostream>
#include <map>
#include "Marker.h"
#include "Utils.h"

//enum ROW {
//	FIRSTROW = 0,
//	SECONDROW = 2,
//	THIRDROW = 4,
//};


class Game
{
public:
	Game();
	void printGrid() const;
	void printGridString() const;
	void placeMarker();
	bool checkPositionOpen(ROW row, int column, bool& correctChoice);
	void gameLoop();
	void switchPlayer();
	PLAYER getCurrentPlayer() const;
	void checkWinner();
	std::array< std::array<std::string, 5>, 5>& getGridString();

private:
	std::array< std::array<Marker, 5>, 5> grid;
	std::array< std::array<std::string, 5>, 5> gridString;
	PLAYER currentPlayer;
	bool winnerExists;

};

