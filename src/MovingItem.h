#ifndef _MovingItem 
#define _MovingItem 
#include "ofMain.h" 
#include "MultiTargetColourCycling.h"
class MovingObject {

public: 

		
	void setup();
	void update();
	void draw();


	float x;        //position
	float y;
	float speedY;   // speed and direction
	float speedX;
	int radius;        // size


	MovingObject();
private:
};
#endif