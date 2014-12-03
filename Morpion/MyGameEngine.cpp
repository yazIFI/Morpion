#include "MyGameEngine.h"
#include <time.h>

using namespace std;
DWORD startTime = GetTickCount();
DWORD currentTime = GetTickCount();
DWORD previousTime = currentTime;

int coef = 0;
int vague = 0;
MyGameEngine::~MyGameEngine(){

}

void MyGameEngine::idle(){

	
	currentTime = GetTickCount();
	
	
}

