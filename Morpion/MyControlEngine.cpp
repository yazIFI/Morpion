#include "MyControlEngine.h"
#include "Case.h"
#include "Grille.h"


float r1, g1, b1 = 1.0f;
bool heSelected = false;
int numberSelection = 0;
std::vector<Case *> *listC = new std::vector < Case * > ;
int MyControlEngine::sizeW = 0;
int MyControlEngine::sizeH = 0;
int caseRandom = 0;
bool myTurne = true;
bool occuped = false;
Grille gr;
std::vector<float> *temp = new std::vector <float>;
std::vector<int> *listCasesChoiced = new std::vector <int>;
void MyControlEngine::MouseCallback(int button, int state, int x, int y){
	gr.nb = pr->getChoice();
	gr.getListCases(c);
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		/*gestion de la dimension de la fenetre*/
		float x1 = (x - (sizeW / 2)) / (sizeW / 2.f);
		float y1 = (y - (sizeH/ 2)) / (-sizeH/ 2.f);
		int caseChoisie;
		caseChoisie = ((int)((x1 + 1) / (2.0 / pr->getChoice())) + (pr->getChoice() * (int)((-y1 + 1) / (2.0 / pr->getChoice()))));
		temp->push_back(x);
		temp->push_back(y);
		if (listCasesChoiced->size() >= 1){
			for (int i = 0; i < listCasesChoiced->size(); i++){
				if ((*listCasesChoiced)[i] == caseChoisie){
					occuped = true;
					break;
				}
			}if (!occuped){
				listCasesChoiced->push_back(caseChoisie);
				pr->listChoicei->push_back((*c)[caseChoisie]->getPosX());
				pr->listChoicej->push_back((*c)[caseChoisie]->getPosY());
				(*gr.listCases)[caseChoisie] = 1;
				occuped = true;
				myTurne = false;
			}
		}
		else{
			listCasesChoiced->push_back(caseChoisie);
			pr->listChoicei->push_back((*c)[caseChoisie]->getPosX());
			pr->listChoicej->push_back((*c)[caseChoisie]->getPosY());
			(*gr.listCases)[caseChoisie]=1;
			myTurne = false;
		}
		caseRandom = rand() % 9;
		
		while (true && listCasesChoiced->size()<(pr->getChoice()*pr->getChoice())){
			for (int i = 0; i < listCasesChoiced->size(); i++){
				if ((*listCasesChoiced)[i] == caseRandom){ occuped = true; break; }
			}
			if (!occuped){  break; }
			caseRandom = rand() % 9;
			occuped = false;
		}
		if (!myTurne){
			listCasesChoiced->push_back(caseRandom);
			pr->randomChoice->push_back((*c)[caseRandom]->getPosX());
			pr->randomChoice->push_back((*c)[caseRandom]->getPosY());
			(*gr.listCases)[caseRandom] = 2;
			myTurne = true;
		}

		pr->played = true;
		
	}
	
	
	if (playerWin(gr.listCases, 0,0)==true){ std::cout << "YOU WIN :)" << std::endl; }
	if (MachineWin(gr.listCases, 0, 0) == true){ std::cout << "YOU LOOSE :(" << std::endl; }
}

bool MyControlEngine::playerWin(std::vector<int> *temp, int i,int j){
	if ((i / pr->getChoice() >= pr->getChoice()) || (j >= pr->getChoice())){ return false; }
	
	if (((*temp)[i]==1) && ((*temp)[i + 1]==1) && ((*temp)[i + 2] == 1)){
		return true;
	}
	if (((*temp)[j] == 1) && ((*temp)[j + pr->getChoice()] == 1) && ((*temp)[j + (2 * pr->getChoice())] == 1)){
		return true;
	}
	if (((*temp)[j] == 1) && ((*temp)[j + (pr->getChoice() + 1)] == 1) && ((*temp)[j + (2 * (pr->getChoice()+1))] == 1)){
		return true;
	}

	if (((*temp)[j] == 1) && ((*temp)[j + (pr->getChoice() - 1)] == 1) && ((*temp)[j + (2 * (pr->getChoice() - 1))] == 1)){
		return true;
	}

	i += pr->getChoice();
	j += 1;
	playerWin(temp, i,j);
}


bool MyControlEngine::MachineWin(std::vector<int> *temp, int i,int j){
	if ((i / pr->getChoice() >= pr->getChoice()) || (j >= pr->getChoice())){ return false; }

	if (((*temp)[i] == 2) && ((*temp)[i + 1] == 2) && ((*temp)[i + 2] == 2)){
		return true;
	}

	if (((*temp)[j] == 2) && ((*temp)[j + pr->getChoice()] == 2) && ((*temp)[j + (2 * pr->getChoice())] == 2)){
		return true;
	}
	if (((*temp)[j] == 2) && ((*temp)[j + (pr->getChoice() + 1)] == 2) && ((*temp)[j + (2 * (pr->getChoice() + 1))] == 2)){
		return true;
	}

	if (((*temp)[j] == 2) && ((*temp)[j + (pr->getChoice() - 1)] == 2) && ((*temp)[j + (2 * (pr->getChoice() - 1))] == 2)){
		return true;
	}

	i += pr->getChoice();
	j += 1;
	MachineWin(temp, i, j);
}

MyControlEngine::~MyControlEngine(){
	delete listC;
	delete temp;
	
}