#ifndef _TEST_APP //インクルードガード
#define _TEST_APP

#include "ofMain.h"
#include "ofBlob.h" //Blob.hをインクルード

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
    
    ofBlob blob; //ofBlobクラスをインスタンスblobを生成
};

#endif