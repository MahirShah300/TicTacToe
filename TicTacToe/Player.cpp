#include "Player.h"


void Player::placeMark(std::array<std::array<std::string, 5>, 5>& grid, int playerLocationChoice, const Map& locationToIndicesMap)
{
	grid[static_cast<int>(locationToIndicesMap.getLocationToIndices()[playerLocationChoice].first)][static_cast<int>(locationToIndicesMap.getLocationToIndices()[playerLocationChoice].second)] = playerMark;
	playerGrid[static_cast<int>(locationToIndicesMap.getLocationToIndices()[playerLocationChoice].first)][static_cast<int>(locationToIndicesMap.getLocationToIndices()[playerLocationChoice].second)] = playerMark;
	numberOfTurns++;

}

void Player::setMark(std::string mark)
{
	this->playerMark = mark;
}

int Player::getNumberOfTurns()
{
	return numberOfTurns;
}

bool Player::checkWinner()
{
	if (numberOfTurns >= 5)
	{

		for (int i = 0; i < 5; i += 2)
		{
			if (playerGrid[i][0] == playerMark && playerGrid[i][2] == playerMark && playerGrid[i][4] == playerMark) //check rows
				return true;

			else if (playerGrid[0][i] == playerMark && playerGrid[2][i] == playerMark && playerGrid[4][i] == playerMark) // check columns
				return true;
		}
	}
}



Player::Player() : playerMark{""}
{
	std::string mark{ "" };
	std::cout << "Which mark do you want to use?" << std::endl;
	std::cin >> mark;
	setMark(" " + mark + " ");
}

int Player::numberOfTurns = 0;

