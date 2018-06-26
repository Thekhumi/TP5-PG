#include "ScoreManager.h"
#include <algorithm>
#include <functional>

ScoreManager::ScoreManager()
{

}

ScoreManager::~ScoreManager()
{
}

void ScoreManager::AddScore(Score score)
{
	scoreList.push_back(score);
	sort(scoreList.begin(), scoreList.end(), comparer);
	HighScore = scoreList.at(0);
}

Score ScoreManager::getHighScore()
{
	return HighScore;
}

vector<Score> ScoreManager::getScoreBoard()
{
	return scoreList;
}


