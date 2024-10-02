#include "Player.h"


void Player::placeMark(std::array<std::array<std::string, 5>, 5>& grid, int location, Map& locationToIndicesMap)
{
	grid[locationToIndicesMap.getLocationToIndices()[location].first][locationToIndicesMap.getLocationToIndices()[location].second] = playerMark;

}

void Player::setMark(std::string mark)
{
	this->playerMark = mark;
}

Player::Player() : playerMark{""}
{
	std::string mark{ "" };
	std::cout << "Which mark do you want to use?" << std::endl;
	std::cin >> mark;
	setMark(mark);	
}

