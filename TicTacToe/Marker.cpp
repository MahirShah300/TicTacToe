#include "Marker.h"

Marker::Marker() : mark{"   "}, isEmpty{true}
{
}

void Marker::takeMark(PLAYER player)
{
	if (player == PLAYERONE)
		mark = " X ";
	else
		mark = " O ";
}

bool Marker::getIsEmpty()
{
	return isEmpty;
}

std::string Marker::getMark()
{
	return mark;
}
