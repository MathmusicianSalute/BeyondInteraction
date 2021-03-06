#pragma once

#include "ofMain.h"
#include "ofxBox2d.h" //ofxBox2dのライブラリを読込み

class testApp : public ofBaseApp {
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    
    ofxBox2d box2d; //Box2Dのインスタンス
    vector <ofPtr<ofxBox2dCircle> > circles; //円を格納するvector
};