#include "Grille.h"
#include "Case.h"
using namespace std;

bool Grille::isAgoodChoice = true;

Grille::~Grille(){}
bool wedrawed = false;
int indexi=0, indexj=0;
void Grille::draw(std::vector<Case * > *cases){
	/*pour eviter de redessiner a chaque fois*/
	if (wedrawed == false){
		float tempX = -1.0;
		float tempY = 1.0;
		float r = 0.0;
		float g = 0.5;
		float b = 0.5;
		float cote = (2.0 / nb);
		for (int i = 0; i <= nb; i++){
			for (int j = 0; j <= nb; j++){
				indexj++;
				cases->push_back(new Case(tempX, tempY, cote-0.01, cote-0.01, r, g, b,indexi,indexj));
				//if (r == 0.0){ r = 0.5; g = 0.5; b = 0.5; }
				//else { r = 0.0;/* g = 1.0; b = 1.0;*/ }
				tempX += cote;
			}
			indexj = 0;
			indexi++;
			tempX = -1.0;
			tempY -= cote;
		//	if (r == 0.0){ r = 0.5; g = 0.5; b = 0.5; }
			//else { r = 0.0;/* g = 1.0; b = 1.0;*/ }
		}
		wedrawed = true;
	}

	for (int i = 0; i< cases->size();i++){
		(*cases)[i]->draw();

	}
	
}


void Grille::listCases(std::vector<Case *> *c){
	if (c->size()>0){ c->clear(); }
	float tempX = 1.0;
	float tempY = 1.0;
	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			c->push_back(new Case(tempX, tempY, 0.0, 0.0, 0.0));

			tempX -= 0.2;
		}
		tempX = 1.0;
		tempY -= 0.2;

	}

}