#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // Set the background color to black
    ofBackground(0);
                
    // Set the drawing color to white
    ofSetColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){
    k = k+10;
}

//--------------------------------------------------------------
void ofApp::draw(){
    // Set the drawing mode to draw triangles
    ofSetPolyMode(OF_POLY_WINDING_ODD);
    ofNoFill();
    
    // Set the parameters for the surface plot
    float radius = 200;
    
    // Begin drawing the surface plot
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    for(float u = 0; u <= TWO_PI; u += 0.15){
        for(float v = 0; v <= PI; v += 0.15){
            float x = radius * sin(u) * cos(v);
            float y = radius * sin(u) * sin(k*v);
            float z = radius * cos(v);
            ofDrawSphere(x, y, z, 2);
            if (u > 0) {
                ofDrawLine(x, y, z, prevX, prevY, prevZ);
            }
            prevX = x;
            prevY = y;
            prevZ = z;
        }
    }
    ofPopMatrix();
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
