#include <string>
#include "stdio.h"
#include "stdlib.h"
#include "MyGraphicEngine.h"
#include "Case.h"
#include "Grille.h"

#define PI 3.141592653589

using namespace std;

char *priceS = new char[10];
DWORD penalTime = GetTickCount();

Grille grille;

std::vector<float> *temp2 = new std::vector < float >;
void MyGraphicEngine::Draw(){
	grille.nb=pr->getChoice();
	grille.draw(cases);
	if (pr->played == true){
	
		pr->played = false;
	}
	pr->play(*pr->listChoicei, *pr->listChoicej);
	if (pr->randomChoice->size()>=1){
		for (int i = 0; i < pr->randomChoice->size(); i+=2){
			GraphicPrimitives::drawLine2D((*pr->randomChoice)[i], (*pr->randomChoice)[i+1], (*pr->randomChoice)[i] + (2.0 / pr->getChoice()), (*pr->randomChoice)[i+1] + (2.0 / pr->getChoice()), 1.0, 1.0, 0.0);
			GraphicPrimitives::drawLine2D((*pr->randomChoice)[i], (*pr->randomChoice)[i+1] + (2.0 / pr->getChoice()), (*pr->randomChoice)[i] + (2.0 / pr->getChoice()), (*pr->randomChoice)[i+1], 1.0, 1.0, 0.0);
		}
		
	}

	
}

void MyGraphicEngine::reshape(int width, int height){
	MyControlEngine::sizeW = width;
	MyControlEngine::sizeH = height;
}



MyGraphicEngine::~MyGraphicEngine(){
	delete cases;
	delete temp2;
	delete priceS;

}