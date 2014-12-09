#pragma once
#include "MyControlEngine.h"//sans l'importe le std::vector n'est pas reconnu ?
#include "Case.h"
class TypePlay{

public:
	void play(std::vector<Case *> *listC);
};