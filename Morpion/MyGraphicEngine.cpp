#include <string>
#include "stdio.h"
#include "stdlib.h"
#include "MyGraphicEngine.h"
#include "MyControlEngine.h"
#include "Case.h"
#include "Grille.h"

#define PI 3.141592653589

using namespace std;

char *priceS = new char[10];
DWORD penalTime = GetTickCount();
Grille grille(3);
void MyGraphicEngine::Draw(){
	grille.draw(cases);
	cout << "ok" << endl;
	

	
}

void MyGraphicEngine::reshape(int width, int height){
	MyControlEngine::sizeW = width;
	MyControlEngine::sizeH = height;
}

MyGraphicEngine::~MyGraphicEngine(){
	delete cases;
	delete priceS;

}