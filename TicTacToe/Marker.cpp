#include "Marker.h"

Marker::Marker() : mark{"   "}, isEmpty{true}
{
}

void Marker::setMark(std::string mark)
{
	this->mark = mark;
}

void Marker::takeMark(PLAYER player)
{
	if (player == PLAYERONE)
		setMark(" X ");
	else
		setMark(" O ");
	isEmpty = false;
}

bool Marker::getIsEmpty()
{
	return isEmpty;
}

std::string Marker::getMark()
{
	return mark;
}
