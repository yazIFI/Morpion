#pragma once
#include "Engine.h"
#include "GraphicPrimitives.h"
#include "MyControlEngine.h"
#include "Random.h"
#include "Case.h"



using namespace std;

class MyGraphicEngine :public GraphicEngine {

public:
	std::vector<Case * > *cases = new std::vector < Case * > ;
	PlayRandom *pr;
	int n;
	MyGraphicEngine(int n_, PlayRandom *pr_) :
		n(n_),
		pr(pr_)
	{}
	
	~MyGraphicEngine();

	virtual void Draw();
	virtual void reshape(int width, int height);



};


