#pragma once
#include<iostream>
#include <array>
#include <map>
#include "string"




class Player
{

public:
	void placeMark(std::array< std::array<std::string, 5>, 5>& grid, int location, std::map<int, std::pair<int, int>> &locationToIndices);
	void setMark(std::string mark);
	Player();


private:
	std::array< std::array<std::string, 5>, 5> Playergrid;
	std::string playerMark;

};

// function that takes user input to select position of where to place mark
// look into maps c++ for the postion, so each number to a pair of indexes instead of using formula