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
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // Set the drawing mode to draw triangles
    ofSetPolyMode(OF_POLY_WINDING_ODD);
    ofNoFill();
    
    // Set the parameters for the surface plot
    float a = 100;
    float b = 50;
    float n = 5;
    float m = 7;
    float radius = 1;

    // Rotate around the x- and z-axes
    float angleX = ofGetElapsedTimef() * 10; // Rotate 10 degrees per second
    float angleZ = ofGetElapsedTimef() * 5; // Rotate 5 degrees per second
    ofRotateX(angleX);
    ofRotateZ(angleZ);
    
    // Begin drawing the surface plot
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2, 0);
    ofScale(0.25, 0.25, 0.25);
    for(float u = -PI; u <= PI; u += 0.1){
        for(float v = -PI; v <= PI; v += 0.1){
            float x = radius * a * sin(u) * cos(v);
            float y = radius * b * sin(u) * sin(v);
            float z = radius * sin(m * u) + m * cos(n * v);
            ofVec3f vertex(x, y, z);
            ofDrawSphere(vertex, 2);
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

