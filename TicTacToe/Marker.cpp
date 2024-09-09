#include "Marker.h"

Marker::Marker() : xOrO{"   "}, isEmpty{true}
{
}

bool Marker::getIsEmpty()
{
	return isEmpty;
}

std::string Marker::getxOrO()
{
	return xOrO;
}
