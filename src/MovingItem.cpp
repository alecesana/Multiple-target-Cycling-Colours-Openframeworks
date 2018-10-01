#include "MovingItem.h"

MovingObject::MovingObject() {
}

void MovingObject::setup() {
	x = ofRandom(0, ofGetWidth());      // define some random positioning for the object
	y = ofRandom(0, ofGetHeight());

	speedX = ofRandom(-1, 1);           // define some random speed for each axis
	speedY = ofRandom(-1, 1);

	radius = ofRandom(7,70);              //define radius of the circle

}

void MovingObject::update() {

	//boundaries check
	if (x < 0) {
		x = 0;
		speedX *= -1;
	}
	else if (x > ofGetWidth()) {
		x = ofGetWidth();
		speedX *= -1;
	}

	if (y < 0) {
		y = 0;
		speedY *= -1;
	}
	else if (y > ofGetHeight() ) {
		y = ofGetHeight();
		speedY *= -1;
	}

	x += speedX;
	y += speedY;
}

void MovingObject::draw() {
	ofDrawCircle(x, y, radius);
}