#pragma once
#include "Engine.h"
#include "PlayRandom.h"
#include "Case.h"

class MyControlEngine :public ControlEngine{
	
public:
	std::vector<Case * > *c = new std::vector < Case * >;
	
	PlayRandom *pr;
	int nb;
	MyControlEngine(int nb_, PlayRandom *pr_) :
		nb(nb_),
		pr(pr_)
	{}

	~MyControlEngine();

	static int sizeW;
	static int sizeH;
	bool playerWin(std::vector<int> *temp, int i,int j);
	bool MachineWin(std::vector<int> *temp, int i, int j);
	virtual void MouseCallback(int button, int state, int x, int y);
};