#pragma once
#include "TypePlay.h"

class AlphaBeta{

private:
	int choicePlay;

public:
	AlphaBeta(int c_) :
		choicePlay(c_)
	{}
	int getChpoice();
	void setChoice(int newChoice);
	void play();
};