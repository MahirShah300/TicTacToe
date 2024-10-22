#pragma once
#include <array>
#include "string"
#include <iostream>
#include <map>
#include "Marker.h"	
#include "LocationMap.h"
#include "Player.h"




class Game
{
public:
	Game();
	void printGrid() const;
	void printGridString() const;
	//void placeMarker();
	//bool checkPositionOpen(ROW row, int column, bool& correctChoice);
	void gameLoop();
	//void switchPlayer();
	//PLAYER getCurrentPlayer() const;
	void checkWinner();
	std::array< std::array<std::string, 5>, 5>& getGridString();
	int getPlayerLocationChoice();
	bool checkPositionEmpty(int playerLocationChoice);
	Map getMap();

private:
	std::array< std::array<Marker, 5>, 5> grid;
	std::array< std::array<std::string, 5>, 5> gridString;
	std::string playerOneMark;
	std::string playerTwoMark;
	int playerLocationChoice;
	PLAYER currentPlayer;
	bool winnerExists;
	Map locationToIndicesMap;

};

