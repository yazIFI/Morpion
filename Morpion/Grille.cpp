#include "Grille.h"
#include "Case.h"
using namespace std;

bool Grille::isAgoodChoice = true;


bool wedrawed = false;
bool wefill = false;
int indexi=1, indexj=1;
void Grille::draw(std::vector<Case * > *cases){
	/*pour eviter de redessiner a chaque fois*/
	if (wedrawed == false){
		float tempX = -1.0;
		float tempY = 1.0;
		float r = 0.0;
		float g = 0.5;
		float b = 0.5;
		float cote = (2.0 / nb);
		for (int i = 0; i < nb; i++){
			tempY -= cote;
			for (int j = 0; j < nb; j++){
				indexj++;
				cases->push_back(new Case(tempX, tempY, cote-0.01, cote-0.01, r, g, b,indexi,indexj));
				tempX += cote;
			}
			indexj = 0;
			indexi++;
			tempX = -1.0;
		}
		wedrawed = true;
	}

	for (int i = 0; i< cases->size();i++){
		(*cases)[i]->draw();

	}
	
}


void Grille::getListCases(std::vector<Case *> *c){
	/*pour eviter de remplir a chaque fois*/
	if (wefill == false){
		if (c->size() <= 0){
			float tempX = -1.0;
			float tempY = 1.0;
			float cote = (2.0 / nb);
			cout << "nb :" << nb << endl;
			for (int i = 0; i < nb; i++){
				tempY -= cote;
				tempX = -1.0;
				for (int j = 0; j < nb; j++){
					indexj++;
					c->push_back(new Case(tempX, tempY, cote - 0.01, cote - 0.01, 0.0, 0.0, 0.0, indexi, indexj));
					tempX += cote;
				}
				indexj = 0;
				indexi++;


			}
		}
		for (int i = 0; i < (nb*nb); i++){
			listCases->push_back(0);
		}
	}
	wefill = true;
}

	



Grille::~Grille(){
	delete listCases;
}