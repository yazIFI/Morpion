#pragma once
#include "TypePlay.h"

class MiniMax : public TypePlay{

private:
	int choicePlay;

public:
	MiniMax(int c_):
		choicePlay(c_)
	{}
	int getChpoice();
	void setChoice(int newChoice);
	void play(std::vector<Case *> *listC);
};