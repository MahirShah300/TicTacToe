#include "Utils.h"


std::map<int, std::pair<ROW, int>> locationToIndices;


void initialiseMap()
{
    for (int i = 1; i < 10; i++)
    {
        if (i < 4)
        {
            locationToIndices.emplace(i, std::pair<ROW, int>{FIRSTROW, (2 * i) - 2 });
        }

        else if (i < 7)
        {
            locationToIndices.emplace(i, std::pair<ROW, int>{SECONDROW, (2 * i) - 8});
        }

        else
        {
            locationToIndices.emplace(i, std::pair<ROW, int>{THIRDROW, (2 * i) - 14});
        }
    }
};