#include <iostream>
#include "Engine.h"
#include "MyGraphicEngine.h"
#include "MyGameEngine.h"
#include <vector>




int main(int argc, char * argv[])
{
	
	Engine e(argc, argv);
	
	GraphicEngine * dge = new MyGraphicEngine(2);
	GameEngine * dgae = new MyGameEngine(2);

	e.setGraphicEngine(dge);
	//e.setGameEngine(dgae);
	e.start();
	system("pause");
	return 0;
}
