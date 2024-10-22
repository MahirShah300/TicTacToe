#include "Game.h"


Game::Game() : currentPlayer{PLAYERONE}, winnerExists{false}, playerLocationChoice{0}, playerOneMark{""}, playerTwoMark{""}
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

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 5; j++)
            {
                if (j % 2 == 0)
                    gridString[i][j] = "   ";
                else
                    gridString[i][j] = "|";
            }
        }
        else
            for (int j = 0; j < 5; j++)
                gridString[i][j] = "--";
    }
    
    //for (int i = 1; i < 10; i++)
    //{
    //    if (i < 4)
    //    {
    //        locationToIndices.emplace(i, std::pair<ROW, int>{FIRSTROW, (2 * i) - 2 });
    //    }

    //    else if (i < 7)
    //    {
    //        locationToIndices.emplace(i, std::pair<ROW, int>{SECONDROW, (2 * i) - 8});
    //    }

    //    else
    //    {
    //        locationToIndices.emplace(i, std::pair<ROW, int>{THIRDROW, (2 * i) - 14});
    //    }
    //}

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

void Game::printGridString() const
{
    for (auto row : gridString)
    {
        for (auto element : row)
            std::cout << element;
        std::cout << std::endl;
    }
    std::cout << std::endl;
}



//void Game::placeMarker()
//{
//    int choice{ 0 };
//    bool correctChoice{ false };
//    while (!correctChoice) {
//        std::cout << "Choose where to place the marker: ";
//        std::cin >> choice;
//
//        if (choice < 1 || choice > 9) {
//            std::cout << "Invalid Choice, please choose a number between 1 and 9" << std::endl;
//        }
//
//        else if (choice <= 3 && choice >= 1) {
//            if (checkPositionOpen(FIRSTROW, (2 * choice) - 2, correctChoice)) {
//                grid[FIRSTROW][(2 * choice) - 2].takeMark(currentPlayer);                       // 1 2 3 --- choice
//            }                                                                   // 0 2 4 --- grid column index
//        }                                                                       // 2n - 2 gives the column index for given choice
//
//        else if (choice <= 6 && choice >= 4) {
//            if (checkPositionOpen(SECONDROW, (2 * choice) - 8, correctChoice)) {
//                grid[SECONDROW][(2 * choice) - 8].takeMark(currentPlayer);                      // 4 5 6 --- choice
//            }                                                                   // 0 2 4 --- grid column index
//        }                                                                       // 2n - 4 gives the column index for given choice
//
//        else if (choice <= 9 && choice >= 7) {
//            if (checkPositionOpen(THIRDROW, (2 * choice) - 14, correctChoice)) {
//                grid[THIRDROW][(2 * choice) - 14].takeMark(currentPlayer);                      // 7 8 9 --- choice
//            }                                                                   // 0 2 4 --- grid column index
//        }                                                                       // 2n-14 --- gives the column index for given choice
//        else
//        {
//            std::cout << "Invalid Choice, please choose a number between 1 and 9" << std::endl;
//        }
//    }
//}



//bool Game::checkPositionOpen(ROW row, int column, bool& correctChoice)
//{
//    if (grid[row][column].getIsEmpty()){
//        correctChoice = !correctChoice;
//        return correctChoice;
//    }
//
//    else{
//
//        std::cout << "This position has already been, used. Please make another choice" << std::endl;
//        printGrid();
//        return correctChoice;
//    }
//
//
//}

void Game::gameLoop()
{
    while (!winnerExists) {
        std::cout << "Player one:" << std::endl;
        printGrid();
        //placeMarker();
        //switchPlayer();
        std::cout << "Player two:" << std::endl;
        printGrid();
        //placeMarker();
        //switchPlayer();

    }
}

//PLAYER Game::getCurrentPlayer() const
//{
//    return currentPlayer;
//}

void Game::checkWinner()
{ 
    if (Player::getNumberOfTurns() >= 5)
    {

        for (int i = 0; i < 5; i += 2)
        {
            if ((gridString[i][0] == playerOneMark && gridString[i][2] == playerOneMark && gridString[i][4] == playerOneMark) ||
                (gridString[i][0] == playerTwoMark && gridString[i][2] == playerTwoMark && gridString[i][4] == playerTwoMark)) //check rows
            {
                winnerExists = !winnerExists;
                return;
            }

            else if ((gridString[0][i] == playerOneMark && gridString[2][i] == playerOneMark && gridString[4][i] == playerOneMark) ||
                    (gridString[0][i] == playerTwoMark && gridString[2][0] == playerTwoMark && gridString[4][0] == playerTwoMark)) // check columns
            {
                winnerExists = !winnerExists;
                return;
            }
        }

        if (Player::getNumberOfTurns() == 9)
        {
            ;
        }
    }
}

std::array<std::array<std::string, 5>, 5>& Game::getGridString()
{
    return gridString;
}

int Game::getPlayerLocationChoice()
{
    bool correctChoice{ false };
    while(!correctChoice)
    {
        std::cout << "Choose where to place the marker: ";
        std::cin >> playerLocationChoice;
        if (!checkPositionEmpty(playerLocationChoice))
            std::cout << "This location has already been picked, please pick another" << std::endl;

        else if (playerLocationChoice < 1 || playerLocationChoice > 9)
            std::cout << "This choice is incorrect, please choose a number between 1 and 9" << std::endl;
        else correctChoice = !correctChoice;
    }
    return playerLocationChoice;
}

bool Game::checkPositionEmpty(int playerLocationChoice)
{
    if (gridString[static_cast<int>(locationToIndicesMap.getLocationToIndices()[playerLocationChoice].first)][static_cast<int>(locationToIndicesMap.getLocationToIndices()[playerLocationChoice].second)] != "   ")
        return false;

    else 
        return true;
}

Map Game::getMap()
{
    return locationToIndicesMap;
}

//std::map<int, std::pair<ROW, int>> Game::getMap()
//{
//    return locationToIndices;
//}

//void Game::switchPlayer()
//{
//    if (getCurrentPlayer() == PLAYERONE)
//    {
//        currentPlayer = PLAYERTWO;
//    }
//    
//    else 
//    {
//        currentPlayer = PLAYERONE;
//    }
//}

