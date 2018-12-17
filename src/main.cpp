#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	//  setup the GL context
	ofSetupOpenGL(1920, 1080, OF_FULLSCREEN);	
	ofRunApp(new ofApp());
}
