#pragma once
#include "GraphicPrimitives.h"


class Case{

private :
	float posX, posY, width, height;
	float r, g, b;
	int i, j;
	

public:
	
	bool used;
	Case(float posX_ = -1.0f, float posY_ = -1.0f, float width_=0.2, float height_=0.2, float r_ = 0.0f, float g_ = 0.0f, float b_ = 0.0f, int i_ = 0, int j_ = 0,bool used_=false) :
		posX(posX_), posY(posY_),width(width_),height(height_),r(r_), g(g_), b(b_),
		i(i_),j(j_),used(used_){}
	
	~Case();
	
	
	void draw();
	//Getter
	float getPosX();
	float getPosY();
	float getWidth();
	float getHeight();
	float getR();
	float getG();
	float getB();
	//Setter
	void setposX(float newX);
	void setposY(float newY);
	void setWidth(float newW);
	void setHeight(float newH);
	void setR(float newR);
	void setG(float newG);
	void setB(float newB);

};