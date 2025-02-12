#pragma once

#include "ofMain.h"
#define NUM 120

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
		
    ofBoxPrimitive box, mBox[NUM];//クラス　インスタンス
    int boxSize;
    ofEasyCam cam;
    
    ofVec2f p, vec;
    
    ofImage BackgroundImage;
    
    ofSoundPlayer sound;
};
