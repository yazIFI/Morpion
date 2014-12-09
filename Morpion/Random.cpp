#include "Random.h"





void Random::play(std::vector<Case *> *listC){
	GraphicPrimitives::drawLine2D(0.0, 0.0, 0.5, 0.5, 1.0, 0.0, 0.0);
	/*for (int i = 0; i < listCoice->size(); i++)
	{
		std::cout << "ok " << std::endl;
		//GraphicPrimitives::drawFillRect2D((*(*listCoice)[i])[0], (*(*listCoice)[i])[1],0.1,0.1,1.0,1.0,1.0);
	}*/
	
}

Random::~Random(){
	delete listCoicei;
	delete listCoicej;
}