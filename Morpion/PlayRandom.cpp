#include "PlayRandom.h"




void PlayRandom::play(std::vector <float > x, std::vector <float > y){
	for (int i = 0; i < x.size(); i++)
	{
		GraphicPrimitives::drawLine2D(x[i], y[i], x[i] + (2.0/choicePlay), y[i] + (2.0/choicePlay), 1.0, 0.0, 0.0);
		GraphicPrimitives::drawLine2D(x[i], y[i] + (2.0/choicePlay), x[i] + (2.0/choicePlay), y[i], 1.0, 0.0, 0.0);
		//GraphicPrimitives::drawFillRect2D(x[i], y[i], (2.0 / choicePlay), (2.0 / choicePlay), 1.0, 0.0, 0.0);
	}
	

}

int PlayRandom::getChoice(){ return choicePlay; }
PlayRandom::~PlayRandom(){
	delete listChoicei;
	delete listChoicej;
}