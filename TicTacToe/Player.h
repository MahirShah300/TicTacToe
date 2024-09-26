#pragma once
#include <array>
#include "Marker.h"

class Player
{

public:
	void setMark(std::array< std::array<Marker, 5>, 5>& grid);

private:
	std::array< std::array<Marker, 5>, 5> Playergrid;
};

