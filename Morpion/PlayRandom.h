#pragma once

#include "Case.h"
class PlayRandom{

private:
	int choicePlay;

public:
	bool played;
	std::vector<float> *listChoicei;
	std::vector<float > *listChoicej;
	std::vector<float> *randomChoice = new std::vector < float >;
	PlayRandom(int c_ = 3, bool played_ = false) :
		choicePlay(c_),
		played(played_),
		listChoicei(new std::vector <float >),
		listChoicej(new std::vector < float >)
	{}
	int getChoice();
	void setChoice(int newChoice);
	void play(std::vector <float > x, std::vector <float > y);

	~PlayRandom();
};