#include "Case.h"
char si[10];
char sj[10];
Case::~Case(){

}

//function draw 
void Case::draw(){
	_itoa_s(i, si, 10);
	_itoa_s(j, sj, 10);
	GraphicPrimitives::drawFillRect2D(posX, posY, width, height, r, g, b);
	GraphicPrimitives::drawText2D(si, posX, posY+0.04, 1.0, 1.0, 1.0);
	if (i < 10){
		GraphicPrimitives::drawText2D(",", posX + 0.02, posY + 0.04, 1.0, 1.0, 1.0);
		GraphicPrimitives::drawText2D(sj, posX + 0.03, posY + 0.04, 1.0, 1.0, 1.0);
	}
	else{
		GraphicPrimitives::drawText2D(",", posX + 0.05, posY + 0.04, 1.0, 1.0, 1.0);
		GraphicPrimitives::drawText2D(sj, posX + 0.06, posY + 0.04, 1.0, 1.0, 1.0);
	}
	
}
//Getter
float Case::getPosX(){
	return posX;
}
float Case::getPosY(){
	return posY;
}
float Case::getWidth(){
	return width;
}
float Case::getHeight(){
	return height;
}
float Case::getR(){
	return r;
}
float Case::getG(){
	return g;
}
float Case::getB(){
	return b;
}

//Setter
void Case::setposX(float newX){
	posX = newX;
}
void Case::setposY(float newY){
	posX = newY;
}
void Case::setWidth(float newW){
	width = newW;
}
void Case::setHeight(float newH){
	height = newH;
}
void Case::setR(float newR){
	r = newR;
}
void Case::setG(float newG){
	g = newG;
}
void Case::setB(float newB){
	b = newB;
}