#pragma once
#include "Game.h"


class Marker
{
public:

	Marker();
	void takeMark(PLAYER player);
	bool getIsEmpty();
	std::string getMark();

private:

	bool isEmpty;
	std::string mark;
};

