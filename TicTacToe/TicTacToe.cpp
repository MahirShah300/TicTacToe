// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TicTacToe.h"



int main()
{
    /*
    Game game;
    game.printGrid();

    game.placeMarker();
    game.printGrid();

    game.placeMarker();
    game.printGrid();
    */

    Game game;

    game.printGridMarker();
    game.placeMarkerMark();
    game.printGridMarker();
    game.placeMarkerMark();
    game.printGridMarker();
}
