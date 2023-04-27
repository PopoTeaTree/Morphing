#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){
    rotate++;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    ofEnableDepthTest();
    ofPushMatrix();
    ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2, 0);
    ofRotateXRad(ofDegToRad(rotate));
    ofRotateYDeg(rotate);
    ofRotateZRad(ofDegToRad(rotate));
    
    float radius = 200;
    float step = TWO_PI / 100;
    for (float theta = 0; theta < TWO_PI; theta += step) {
        float x = radius * cos(theta);
        float y = radius * sin(theta);
        float z = radius * sin(theta + ofGetElapsedTimef());
        ofSetColor(255);
        ofDrawSphere(x, y, z, 5);
        if (theta > 0) {
            ofDrawLine(x, y, z, prevX, prevY, prevZ);
        }
        prevX = x;
        prevY = y;
        prevZ = z;
    }
    ofPopMatrix();
    ofDisableDepthTest();
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
