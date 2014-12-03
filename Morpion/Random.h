#pragma once
#include "TypePlay.h"

class Random : public TypePlay{

private:
	int choicePlay;

public:
	Random(int c_) :
		choicePlay(c_)
	{}
	int getChpoice();
	void setChoice(int newChoice);
	void play(std::vector<Case *> *listC);
};