#pragma once
#include<iostream>
#include <array>
#include <map>
#include "string"
#include "LocationMap.h"



class Player
{

public:
	Player();
	void placeMark(std::array< std::array<std::string, 5>, 5>& grid, int location,const Map& LocationToIndicesMap);
	void setMark(std::string mark);
	std::string getPlayerMark();
	static int getNumberOfTurns();
	bool checkWinner();


private:
	std::array< std::array<std::string, 5>, 5> playerGrid;
	std::string playerMark;
	static int numberOfTurns;

};
