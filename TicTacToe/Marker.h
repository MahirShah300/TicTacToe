#pragma once
#include "string"


class Marker
{
public:

	Marker();
	bool getIsEmpty();
	std::string getxOrO();

private:

	bool isEmpty;
	std::string xOrO;
};

