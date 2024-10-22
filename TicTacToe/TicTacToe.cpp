// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TicTacToe.h"

int main()
{

	Game game;
	//Player playerOne;
	//Player playerTwo;

	//playerOne.placeMark(game.getGridString(), game.getPlayerLocationChoice(), game.getMap());
	//playerTwo.placeMark(game.getGridString(), game.getPlayerLocationChoice(), game.getMap());

	//game.printGrid();
	//game.placeMarker();
	//game.switchPlayer();
	//game.printGrid();
	//game.placeMarker();
	//game.printGrid();

	game.printGridString();

}


//TO DO
//In Game class, improve efficency of check winner. Currently checks if player one won or if player two won after every turn
//really only need to check the last player to place marker
