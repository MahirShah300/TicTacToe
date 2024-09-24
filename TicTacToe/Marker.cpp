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
	changeIsEmpty();
}

bool Marker::getIsEmpty() const 
{
	return isEmpty;
}

void Marker::changeIsEmpty()
{
	this->isEmpty = !isEmpty;
}

std::string Marker::getMark() const
{
	return mark;
}

// Make a player class that has it's own board and keeps record of where he chooses. if three in a row, he wins. 
// Also make is so player has function that takes board as a reference and places mark, rather than board setting itself
// Also maybe look into GUI
player1_mark = BoardMarks.circle
player1.mark(board = board, mark_type = player1_mark)
{
	board.take_mark(mark_type)
}