#pragma once

#include "Case.h"
class Random{

private:
	int choicePlay;
	
public:
	bool played;
	std::vector<std::vector<float > *> *listCoicei ;
	std::vector<std::vector<float > *> *listCoicej;
	Random(int c_=3,bool played_=false) :
		choicePlay(c_),
		played(played_),
		listCoicei(new std::vector < std::vector<float > * >),
		listCoicej(new std::vector < std::vector<float > * >)
	{}
	int getChpoice();
	void setChoice(int newChoice);
	void play(std::vector<Case *> *listC);

	~Random();
};