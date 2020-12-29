#include <iostream>
#include <vector>
#define USE_INTERACTION_FUNCTIONS
#include "lpcgraphics.h"
using namespace std;

struct Sprite
{
	double x;
	double y;
	double xv;
	double yv;
};
void Draw(const Sprite & s);
void mousePressed();
void Move(Sprite & s);

vector <Sprite> Sprites;
Image imageVariable = loadImage("pikachu.bmp");
Color bgColor("black");

__INTERACTION_FUNCTIONS__

void setup()
{
	background(bgColor);
}
void mousePressed()
{
	srand(time(0));
	double overallSpeed = rand()%11+5;
	double angle = 6.28*(rand()%360)/360.0;
	Sprite s = {mouseX() - 64 , mouseY() -64, overallSpeed*cos(angle), overallSpeed*sin(angle)};
	Sprites.push_back(s);
}
void draw()
{
	background(bgColor);
	for (int i = 0; i < Sprites.size(); i++)
	{
		Draw(Sprites[i]);
		Move(Sprites[i]);
	}
}

__INTERACTION_FUNCTIONS_END__

int main()
{
 cout << "Starting graphics.\n";
 startGraphics(600, 400, "PA9b");

 waitForClose();
 cout<< "Window closed.\n";
}
void Draw(const Sprite & s)
{
	image(imageVariable, s.x, s.y, 128, 128);
}
void Move(Sprite & s)
{

	s.x += s.xv;
	s.y += s.yv;
	if(s.x > width || s.x < 0 || s.y > height || s.y < 0)
	{
		s.xv = -s.xv;
		s.yv = -s.yv;
	}
}