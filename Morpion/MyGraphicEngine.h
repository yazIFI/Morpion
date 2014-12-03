#pragma once
#include "Engine.h"
#include "GraphicPrimitives.h"

#include "Case.h"



using namespace std;

class MyGraphicEngine :public GraphicEngine {

public:
	std::vector<Case * > *cases = new std::vector < Case * > ;
	
	int n;
	MyGraphicEngine(int n_ = 0) :
		n(n_)
	{}
	
	~MyGraphicEngine();

	virtual void Draw();
	virtual void reshape(int width, int height);



};


