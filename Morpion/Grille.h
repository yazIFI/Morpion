#pragma once
#include "Case.h"

class Grille {

	
public:
	static bool isAgoodChoice;
	int nb;
	~Grille();
	Grille(int nb_=3):
		nb(nb_)
	{}
	void draw(std::vector<Case * > *cases);
	void listCases(std::vector<Case *> *c);
};