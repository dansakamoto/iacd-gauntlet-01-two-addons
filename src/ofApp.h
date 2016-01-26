#pragma once

#include "ofMain.h"
#include "ofxHttpUtils.h"
#include "ofxMyIP.h"

class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    //ofVideoGrabber vidGrabber;
    //ofImage image;
    ofxHttpUtils httpUtils;
    ofxMyIP myip;
    string result;
    
    //int camWidth;
    //int camHeight;
    
    //bool shutter;
    
    //string responseStr;
    //string requestStr;
    //string action_url;
    
    //ofImage testImage;
    
    
};
