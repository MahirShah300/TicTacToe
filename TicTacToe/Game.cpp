#include "Game.h"

Game::Game()
{
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            grid[i] = { "   ", "|", "   ", "|", "   " };
        else
            grid[i] = { "-----------" };
    }

}

void Game::printGrid()
{
    for (auto row : grid)
    {
        for (auto element : row)
            std::cout << element;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Game::placeMarker()
{
    int choice{ 0 };

    std::cout << "Choose where to place the marker: ";
    std::cin >> choice;

    if (choice < 1 || choice > 0){
        std::cout << "Invalid Choice, please choose a number between 1 and 9" << std::endl;
        placeMarker();
    }

    else if (choice <= 3 && choice >= 1)
    {                                                                       // 1 2 3 --- choice
        grid[0][(2 * choice) - 2] = " x ";                                  // 0 2 4 --- grid column index
    }                                                                       // 2n - 2 gives the column index for given choice

    else if (choice <= 6 && choice >= 4)
    {                                                                       // 4 5 6 --- choice
        grid[2][(2 * choice) - 8] = " x ";                                  // 0 2 4 --- grid column index
    }                                                                       // 2n - 4 gives the column index for given choice

    else if (choice <= 9 && choice >= 7)
    {                                                                       // 7 8 9
        grid[4][(2 * choice) - 14] = " x ";                                 // 0 2 4 --- grid column index
    }                                                                       // 2n-14 --- gives the column index for given choice
    else
    {
        std::cout << "Invalid Choice, please choose a number between 1 and 9" << std::endl;
        placeMarker();
    }
}

void Game::checkPosition(int row, int column)
{
    if (grid[row][column] != "   ") {
        std::cout << "This position has already been, used. Please make another choice";
        placeMarker();
    }
}
