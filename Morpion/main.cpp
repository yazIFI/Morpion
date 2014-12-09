#include <iostream>
#include "Engine.h"
#include "MyGraphicEngine.h"
#include "MyControlEngine.h"
#include <vector>
//#include "TypePlay.h"
#include "PlayRandom.h"


int main(int argc, char * argv[])
{
	PlayRandom *pr = new PlayRandom(5);
	Engine e(argc, argv);
	
	GraphicEngine * mge = new MyGraphicEngine(5,pr);
	ControlEngine * mce = new MyControlEngine(5,pr);
	
	e.setGraphicEngine(mge);
	e.setControlEngine(mce);
	e.start();
	system("pause");
	return 0;
}
