// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "TicTacToe.h"
#include <iostream>
#include <array>
#include "string"


int main()
{
    std::array< std::array<std::string, 5>, 5> grid{ "" };

    initialiseGrid(grid);
    printGrid(grid);



}

void printGrid(std::array< std::array<std::string, 5>, 5>& grid){

    for (auto row : grid)
    {
        for (auto element : row)
            std::cout << element;
        std::cout << std::endl;
    }
}

void initialiseGrid(std::array< std::array<std::string, 5>, 5>& grid) {

    for (size_t i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            grid[i] = { "  ", "|", "  ", "|", "  " };
        else
            grid[i] = { "--------" };
    }
}
