#include "MyControlEngine.h"
#include "Case.h"
#include "MyGameEngine.h"

float r1, g1, b1 = 1.0f;
bool heSelected = false;
int numberSelection = 0;
std::vector<Case *> *listC = new std::vector < Case * > ;
int MyControlEngine::sizeW = 0;
int MyControlEngine::sizeH = 0;
Grille gr;
void MyControlEngine::MouseCallback(int button, int state, int x, int y){
	
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		/*gestion de la dimension de la fenetre*/
		float x1 = (x - (sizeW / 2)) / (sizeW / 2.f);
		float y1 = (y - (sizeH/ 2)) / (-sizeH/ 2.f);
		int caseChoisie;
		caseChoisie = ((int)((x1 + 1) / (2/nb)) + (10 * (int)((y1 + 1) / (2/nb))));	
	}
	
}

MyControlEngine::~MyControlEngine(){
	delete listC;
}