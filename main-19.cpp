#include <iostream>
#define USE_INTERACTION_FUNCTIONS
#include "lpcgraphics.h"
#include <cstdlib>
using namespace std;

Color bgColor("black");
int counter = 0;

void Task1()
{
	fillColor(Color(250,250,250));
	rect(225,125,75,75);
	triangle(225,125,262, 162, 300, 125);
	fillColor(Color(0,0,250));
	ellipse(262,162,25,25);
}

void Task2()
{
	noFill();
	strokeColor("green");
	for(int y=0; y<30;y++)
	{
		ellipse(300,200,10*y+10,10*y+10);
	}
}

void Task3()
{
	srand(time(0));
	for(int p=0;p<20;p++)
	{
		noStroke();
		fillColor(rand()%256,rand()%256,rand()%256);
		rect(0,p*20,600,20);
	}
}

__INTERACTION_FUNCTIONS__


void setup()
{
  background(bgColor);
}

void keyPressed()
{
  if (keyCode == keySPACE)
  {
    counter++;
    background(bgColor);
    switch(counter)
    {
    case 1:
      Task1();
      break;
    case 2:
      Task2();
      break;
    case 3:
      Task3();
      break;
    default:
      stopGraphics();
    }
  }
}

__INTERACTION_FUNCTIONS_END__

int main()
{
 cout << "Starting graphics.\n";
 startGraphics(600, 400, "Exercise");
 waitForClose();
 cout << "Window closed.\n";
}
