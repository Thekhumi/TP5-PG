#include "Score.h"


Score::Score(string player, int value)
{
	scorePlayer = player;
	scoreValue = value;
}

Score::Score()
{
	scorePlayer = "";
	scoreValue = 0;
}

Score::~Score()
{
}

void Score::setScore(int score)
{
	scoreValue = score;
}

void Score::setPlayer(string player)
{
	scorePlayer = player;
}