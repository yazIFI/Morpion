#pragma once
#include "TypePlay.h"

class MiniMax{

private:
	int choicePlay;

public:
	MiniMax(int c_):
		choicePlay(c_)
	{}
	int getChpoice();
	void setChoice(int newChoice);
	void play();
};