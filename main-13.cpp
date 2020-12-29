#include <iostream>
#define USE_INTERACTION_FUNCTIONS
#include "lpcgraphics.h"
using namespace std;

__INTERACTION_FUNCTIONS__

void setup()
{
    background(50);
    fillColor("LightBlue");
    text("HELLO WORLD", 200, 100, 32);
    fillColor("Green");
    strokeColor("White");
}

void keyPressed()
{
    switch (keyCode) {
        case keySPACE:
            background(50);
            break;
        case keyESC:
            stopGraphics();
            break;
    }
}

void draw()
{
    if (mouseDown())
    {
        //ellipse(mouseX(), mouseY(), 10, 10);
        triangle(50,50,25, 50, 50, 25);
    }
}


void mousePressed() {
	//ellipse(mouseX(), mouseY(), 50, 50);
	triangle(50,50,25,50,50,25);
}

__INTERACTION_FUNCTIONS_END__

int main()
{
    cout << "Starting graphics.\n";
    startGraphics(600, 400, "Hello Graphics World");
    waitForClose();
    cout << "Window closed.\n";
}

