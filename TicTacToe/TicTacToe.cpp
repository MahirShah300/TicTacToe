// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TicTacToe.h"

int main()
{

	Game game;
	Player playerOne;
	Player playerTwo;

	playerOne.placeMark(game.getGridString(), game.getPlayerLocationChoice(), game.getMap());
	playerTwo.placeMark(game.getGridString(), game.getPlayerLocationChoice(), game.getMap());
	
	Player::getNumberOfTurns();

	//game.printGrid();
	//game.placeMarker();
	//game.switchPlayer();
	//game.printGrid();
	//game.placeMarker();
	//game.printGrid();

	game.printGridString();
	std::cout << Player::getNumberOfTurns();

}
