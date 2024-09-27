#pragma once
#include <array>
#include <map>
#include "string"
#include <utility>



class Player
{

public:
	void placeMark(std::array< std::array<std::string, 5>, 5>& grid, int location);
	void setMark(std::string mark);


private:
	std::array< std::array<std::string, 5>, 5> Playergrid;
	std::string mark;

};

// function that takes user input to select position of where to place mark
// look into maps c++ for the postion, so each number to a pair of indexes instead of using formula
//