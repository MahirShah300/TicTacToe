// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TicTacToe.h"

int main()
{

	Game game;
	Player playerOne;
	Player playerTwo;
	Map testMap;

	playerOne.placeMark(game.getGridString(), 1, testMap);

	//game.printGrid();
	//game.placeMarker();
	//game.switchPlayer();
	//game.printGrid();
	//game.placeMarker();
	//game.printGrid();

	game.printGridString();

}
