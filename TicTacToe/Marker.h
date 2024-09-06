#pragma once
#include "string"

enum MARKER
{
	EMPTY = '   ',
	X = ' x ',
	O = ' o '
};

class Marker
{
public:

	bool getIsEmpty();
	MARKER getxOrO();

private:

	bool isEmpty;
	MARKER xOrO;
};

