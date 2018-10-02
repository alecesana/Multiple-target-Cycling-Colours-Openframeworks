#ifndef _ColourSfumatore
#define _ColourSfumatore
#include "ofMain.h"

//used to address n of colors fed to the function.Here 
//used for explanatory purposes as the number of colors of the blending is fixed, and it will be assigned 
//the chosen number of colors, three 
#define nmaincolors 3
//#include "NodesChain.h"

//---get it to work with any series of n colours 
//--colour selection to happen with a GUI
//
class ColourSfumatore {

public:
	void setup(int _hexcolour1, int _hexcolour2, int _hexcolour3, int _nobjects);
	void update();
	void draw(int _counter);

	

	//number of objects to split in (nobjects/nmaincolors) groups to apply the function to
	int nobjects;

	//array of ofColors whom members are swapped to assign blending colour in time
	ofColor colourcube[nmaincolors];

	//three starting main colours to blend across in numerical order
	ofColor   c0;
	ofColor	  c1;
	ofColor	  c2;

	//three variables storing the blending colour between two subsequent main colours as in c0->c1, c1->c2, c2->c0.
	//
	ofColor c0toc1;
	ofColor c1toc2;
	ofColor c2toc0;

	//array of colours to blend across, in our case, three groups of objects (the amount of objects in each group
	//is determined by the nobjects/ncolors
	
	ofColor	  c[nmaincolors];

	int groupNobjects;


	//used to indicate  the object index in the array and hence the colour is being assigned to
	int counter;

	float colorintime;

	// variable

	int timeconstant;

	//number used to restart the timer, assigned to the value of ofGetElapsedTimef() every time the cycle ends
	int colortimer;

	
	ColourSfumatore();

private:






};
#endif
