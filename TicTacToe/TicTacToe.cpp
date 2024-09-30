// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TicTacToe.h"

//std::map<int, std::pair<ROW, int>> locationToIndices;
//
//void initialiseMap()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		if (i < 4)
//		{
//			locationToIndices.emplace(i, std::pair<ROW, int>{FIRSTROW, (2 * i) - 2 });
//		}
//
//		else if (i < 7)
//		{
//			locationToIndices.emplace(i, std::pair<ROW, int>{SECONDROW, (2 * i) - 8});
//		}
//
//		else
//		{
//			locationToIndices.emplace(i, std::pair<ROW, int>{THIRDROW, (2 * i) - 14});
//		}
//	}
//};

int main()
{

	Game game;
	Player playerOne;
	initialiseMap();
	
	//playerOne.placeMark(game.getGridString(), 1, game.getMap());

	//std::map<int, std::string> myMap{ {1,"one"}, {2,"two"}, {3,"three"} };
	//std::cout << myMap[3];

	//std::map<int, std::pair<int, int>> testMap{ {1, {0,0}}, {2, {0, 2}} };
	//std::cout << testMap[2].second;

	//game.printGrid();
	//game.placeMarker();
	//game.switchPlayer();
	//game.printGrid();
	//game.placeMarker();
	//game.printGrid();

	//game.printGridString();

}
