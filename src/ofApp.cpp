#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    myip.setup();
    httpUtils.start();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(100, 100, 100);
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetHexColor(0xffffff);
    //vidGrabber.draw(20, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 't') {
        ofxHttpForm form;
        form.action = "http://www.dansakamoto.com/iacd/gauntlet01/receiver.php";
        form.method = OFX_HTTP_POST;
        
        vector<ofxMyIPAddress> list = myip.getList();
        stringstream s;
        for (vector<ofxMyIPAddress>::iterator o = list.begin(); o != list.end(); o++) {
            s << "interface: " << o->name << ", ip: " << o->address << ", netmask: " << (!o->netmask.empty() ? o->netmask : "null") << ", broadcast address: " << (!o->broadcast.empty() ? o->broadcast : "null") << endl;
        }
        result = s.str();
        
        form.addFormField("message", result);
        //form.addFile("userfile", "test.jpg");
        
        httpUtils.submitForm(form);
    }
    
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
