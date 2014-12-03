#pragma once
#include "Engine.h"
#include "MyGraphicEngine.h"
#include "Grille.h"

class MyControlEngine :public ControlEngine{
	int nb;
public:
	MyControlEngine(int nb_):
		nb(nb_)
	{}

	~MyControlEngine();

	static int sizeW;
	static int sizeH;
	virtual void MouseCallback(int button, int state, int x, int y);
};