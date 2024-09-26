#include "Game.h"
#include "Marker.h"



Game::Game() : currentPlayer{PLAYERONE}, winnerExists{false}
{

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0) {
            for (int j = 0; j < 5; j++) {
                if (j % 2 == 0)
                    grid[i][j].setMark("   ");
                else
                    grid[i][j].setMark("|");
            }
        }
        else
            for (int j = 0; j < 5; j++)
                grid[i][j].setMark("--");
    }
}



void Game::printGrid() const
{
    for (auto row : grid)
    {
        for (auto element : row)
            std::cout << element.getMark();
        std::cout << std::endl;
    }
    std::cout << std::endl;
}



void Game::placeMarker()
{
    int choice{ 0 };
    bool correctChoice{ false };
    while (!correctChoice) {
        std::cout << "Choose where to place the marker: ";
        std::cin >> choice;

        if (choice < 1 || choice > 9) {
            std::cout << "Invalid Choice, please choose a number between 1 and 9" << std::endl;
        }

        else if (choice <= 3 && choice >= 1) {
            if (checkPositionOpen(FIRSTROW, (2 * choice) - 2, correctChoice)) {
                grid[FIRSTROW][(2 * choice) - 2].takeMark(currentPlayer);                       // 1 2 3 --- choice
            }                                                                   // 0 2 4 --- grid column index
        }                                                                       // 2n - 2 gives the column index for given choice

        else if (choice <= 6 && choice >= 4) {
            if (checkPositionOpen(SECONDROW, (2 * choice) - 8, correctChoice)) {
                grid[SECONDROW][(2 * choice) - 8].takeMark(currentPlayer);                      // 4 5 6 --- choice
            }                                                                   // 0 2 4 --- grid column index
        }                                                                       // 2n - 4 gives the column index for given choice

        else if (choice <= 9 && choice >= 7) {
            if (checkPositionOpen(THIRDROW, (2 * choice) - 14, correctChoice)) {
                grid[THIRDROW][(2 * choice) - 14].takeMark(currentPlayer);                      // 7 8 9 --- choice
            }                                                                   // 0 2 4 --- grid column index
        }                                                                       // 2n-14 --- gives the column index for given choice
        else
        {
            std::cout << "Invalid Choice, please choose a number between 1 and 9" << std::endl;
        }
    }
}



bool Game::checkPositionOpen(ROW row, int column, bool& correctChoice)
{
    if (grid[row][column].getIsEmpty()){
        correctChoice = !correctChoice;
        return correctChoice;
    }

    else{

        std::cout << "This position has already been, used. Please make another choice" << std::endl;
        printGrid();
        return correctChoice;
    }


}

void Game::gameLoop()
{
    while (!winnerExists) {
        std::cout << "Player one:" << std::endl;
        printGrid();
        placeMarker();
        switchPlayer();
        std::cout << "Player two:" << std::endl;
        printGrid();
        placeMarker();
        switchPlayer();

    }
}

PLAYER Game::getCurrentPlayer() const
{
    return currentPlayer;
}

void Game::checkWinner()
{ 
    ;
}

void Game::switchPlayer()
{
    if (getCurrentPlayer() == PLAYERONE)
    {
        currentPlayer = PLAYERTWO;
    }
    
    else 
    {
        currentPlayer = PLAYERONE;
    }
}

