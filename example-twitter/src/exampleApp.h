#pragma once


#include "ofMain.h"
#include "ofxJSONElement.h"


class exampleApp : public ofBaseApp {
public:
    void setup();
    void draw();
            
    ofxJSONElement result;
};
