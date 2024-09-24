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
	void printGrid() const;
	void placeMarker();
	bool checkPositionOpen(ROW row, int column, bool& correctChoice);
	void gameLoop();
	void switchPlayer();
	PLAYER getCurrentPlayer() const;
	void checkWinner();

private:
	std::array< std::array<Marker, 5>, 5> grid;
	PLAYER currentPlayer;
	bool winnerExists;

};

