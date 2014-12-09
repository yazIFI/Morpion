#pragma once
#include "Case.h"

class Grille {

	
public:
	static bool isAgoodChoice;
	int nb;
	std::vector<int> *listCases = new std::vector < int > ;
	~Grille();
	Grille(int nb_=3):
		nb(nb_)
	{}
	void draw(std::vector<Case * > *cases);
	void getListCases(std::vector<Case *> *c);
};