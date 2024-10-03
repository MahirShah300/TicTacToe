#pragma once
#include <map>
#include "Utils.h"


class Map
{
public:
	Map();
	std::map<int, std::pair<ROW, int>>getLocationToIndices() const;
private:
	std::map<int, std::pair<ROW, int>> locationToIndicesMap;
};