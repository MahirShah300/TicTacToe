#pragma once
#include<iostream>
#include <array>
#include <map>
#include "string"
#include "Utils.h"
#include "LocationMap.h"



class Player
{

public:
	void placeMark(std::array< std::array<std::string, 5>, 5>& grid, int location,const Map& LocationToIndicesMap);
	void setMark(std::string mark);
	Player();


private:
	std::array< std::array<std::string, 5>, 5> Playergrid;
	std::string playerMark;

};
