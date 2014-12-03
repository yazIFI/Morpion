#pragma once
#include "MyControlEngine.h"//sans l'importe le std::vector n'est pas reconnu ?
class TypePlay{

public:
	virtual void play(std::vector<Case *> *listC);
};