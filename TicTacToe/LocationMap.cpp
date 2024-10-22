#include "LocationMap.h"

Map::Map()
{
	for (int i = 1; i < 10; i++)
	{
		if (i < 4)
		{
			locationToIndicesMap.emplace(i, std::pair<ROW, int>{ROW::FIRSTROW, (2 * i) - 2 });
		}

		else if (i < 7)
		{
			locationToIndicesMap.emplace(i, std::pair<ROW, int>{ROW::SECONDROW, (2 * i) - 8});
		}

		else
		{
			locationToIndicesMap.emplace(i, std::pair<ROW, int>{ROW::THIRDROW, (2 * i) - 14});
		}
	}
}
std::map<int, std::pair<ROW, int>>Map::getLocationToIndices() const
{
	return locationToIndicesMap;
}

