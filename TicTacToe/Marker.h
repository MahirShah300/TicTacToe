#pragma once
#include "string"


enum PLAYER {
	PLAYERONE,
	PLAYERTWO
};

class Marker
{
public:

	Marker();
	void setMark(std::string mark);
	void takeMark(PLAYER player);
	bool getIsEmpty();
	std::string getMark();

private:

	bool isEmpty;
	std::string mark;
};

