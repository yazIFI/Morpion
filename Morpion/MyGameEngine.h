#pragma once
#include "Engine.h"
#include "Grille.h"



class MyGameEngine :public GameEngine {
public:
	
	
	MyGameEngine();
	int n;
	MyGameEngine(int n_=0) :
		n(n_)

	{
	}
	~MyGameEngine();
	virtual void idle();
	
};
