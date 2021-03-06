#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofExtended.h"
#include "CML.h"
#include "can\can_kvaser.h"
#include "shakeTable\shakeTable.h"
#include "interface\tableInterface.h"

CML_NAMESPACE_USE();

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void exit();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);

		titleBar ttlBar;
		
		tableInterface inter;

		ofImage background;
};

#endif
