#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	
	fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
	for (int i = 0; i<Nitems; i++) {
		CyclingColoursA[i].setup(0x0091d2, 0xFF5733, 0xd7d700, Nitems); //we will cycle through cyan, orange and yellow
		groupOfObjects[i].setup();
	}

}

//--------------------------------------------------------------
void ofApp::update(){
	
	fbo.begin();
	ofClear(0, 0, 0, 255);
	for (int i = 0; i<Nitems; i++) {
		CyclingColoursA[i].update();
		groupOfObjects[i].update();
		ofPushStyle();
		CyclingColoursA[i].draw(i);
		//ofSetColor(CyclingColoursA.draw(i));
		groupOfObjects[i].draw();
		ofPopStyle();
	} 
	fbo.end();
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);

	fbo.draw(0,0);
	ofPushStyle();
	ofSetColor(255, 0, 0);

	//ofDrawBitmapString(ofGetFrameRate(), 40, 40);
	ofPopStyle();
	
		
	



}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
