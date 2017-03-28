#include "ofApp.h"
#include <random>
using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
	
	std::random_device rand;
	std::mt19937 engine1(rand());
	std::mt19937 engine2(1337);
	
	float X;
	float Y;
	
	int min =1200;
	int max=0;
	
	
	std::normal_distribution<float> normal(X,Y);
	std::uniform_int_distribution<> uniform(min,max);
	
	for(int n=0;n<20;n++)
	{
		cout<<normal(engine1)<<"";
	}
	
	for(int n=0 ;  n < 20 ; n++) 
  {
        cout<<uniform(engine2)<<" ";// same output each time
    }
jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)
//X = {500, 20, 30, 80, 300, 200, 750, 380 };// set of x-coordinates for jewel
//Y = {630, 400, 900,40, 200, 0, 90, 30}; //set of y-coordinates for jewel
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
 }
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
