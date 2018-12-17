#include "MultiTargetColourCycling.h"


ColourSfumatore::ColourSfumatore() {
}
//--------------------------------------------------------------
void ColourSfumatore::setup(int _hexcolour1, int _hexcolour2, int _hexcolour3, int _nobjects) { 

	timeconstant = 1;
	nobjects = _nobjects;	
	
	// assigning html colors we are cycling through to swapping color objects

	c0.setHex(_hexcolour1,200); 
	c1.setHex(_hexcolour2,200); 
	c2.setHex(_hexcolour3,200); 
	
	groupNobjects = nobjects / nmaincolors;

}

//--------------------------------------------------------------
void ColourSfumatore::update() {
	
	colorintime = fmodf(timeconstant* ofGetElapsedTimef(), 1);
	//assigning three rotating blending colours to the three ofColor variables c0,c1,2
	c0toc1 = c0;//assign c0
	c0toc1.lerp(c1, colorintime); 
	c[0] = c0toc1;

	c1toc2 = c1;
	c1toc2.lerp(c2, colorintime);
	c[1] = c1toc2;
	
	c2toc0 = c2;
	c2toc0.lerp(c0, colorintime);
	c[2] = c2toc0;

	if ((ofGetElapsedTimef() - colortimer >= 0) && (ofGetElapsedTimef() - colortimer < timeconstant * 1)) {	
	
			colourcube[0] = c[0];
			colourcube[1] = c[1];
			colourcube[2] = c[2];			
	}

	if ((ofGetElapsedTimef() - colortimer >= timeconstant * 1) && (ofGetElapsedTimef() - colortimer < timeconstant * 2)) {
		
			colourcube[0] = c[1];
			colourcube[1] = c[2];
			colourcube[2] = c[0];
		
	}
	if ((ofGetElapsedTimef() - colortimer >= timeconstant * 2) && (ofGetElapsedTimef() - colortimer < timeconstant * 3)) {

			colourcube[0] = c[2];
			colourcube[1] = c[0];
			colourcube[2] = c[1];		

	}

	//wrapping back to starting colour c0

	if (ofGetElapsedTimef() - colortimer >= timeconstant * 3) {
		
		colourcube[0] = c[0];
		colourcube[1] = c[1];
		colourcube[2] = c[2];
	
		colortimer = ofGetElapsedTimef();

	}
}

//--------------------------------------------------------------
void ColourSfumatore::draw(int _counter) {
	
	counter = _counter;
	if ((counter >= 0) && (counter < groupNobjects)) {
		
		ofSetColor(colourcube[0]);
		
	}
	else if ((counter >= groupNobjects) && (counter < 2 * groupNobjects)){		
		
		ofSetColor(colourcube[1]);	
		
	}
	else if ((counter >= 2 * groupNobjects) && (counter < nobjects)){	

		ofSetColor(colourcube[2]);

	}
	
}



