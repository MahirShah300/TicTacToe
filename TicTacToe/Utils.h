#pragma once
#include <map>


enum ROW {
	FIRSTROW = 0,
	SECONDROW = 2,
	THIRDROW = 4,
};

extern std::map<int, std::pair<ROW, int>> locationToIndices;

void initialiseMap();

// Think about encapsulation and scope of functions