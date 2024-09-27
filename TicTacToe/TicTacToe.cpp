// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TicTacToe.h"
#include <utility>
#include <map>


int main()
{

	Game game;
	std::map<int, std::string> myMap{ {1,"one"}, {2,"two"}, {3,"three"} };
	//std::cout << myMap[3];
	std::map<int,int> anotherMap 

	std::map<int, std::pair<int, int>> testMap{ {1, {0,0}}, {2, {0, 2}} };
	std::cout << testMap[2].second;

	//game.printGrid();
	//game.placeMarker();
	//game.switchPlayer();
	//game.printGrid();
	//game.placeMarker();
	//game.printGrid();

	//game.printGridString();
}
