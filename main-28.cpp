#include <iostream>
#define USE_INTERACTION_FUNCTIONS
#include "utility.h"
#include "lpcgraphics.h"
#include <vector>
//(for #12) #include <algorithm>
using namespace std;

Color Card1("Red");
Color Card2("Blue");
Color Card3("Green");
Color White("white");
Color Black("Black");

enum Status {FaceUp,FaceDown,Out};

struct Card
{
	Color color;
	string colorString;
	int CardNum;
	int x;
	int y;
	Status s;
};

void DrawCard(Card & c);
void FillDeck(vector<Card> & deck);
void SetCardPositions(vector<Card> & deck);
//random_shuffle(myvector.begin(),myvector.end())

__INTERACTION_FUNCTIONS__

void setup()
{
//    Card a = {Card2,"Blue", 1, 50, 50, FaceUp};
//    Card b = {Card1,"red", 1, 150, 50, FaceUp};
//    Card c = {Card3,"green", 2, 250,50, FaceUp};
//    Card d = {Card1,"red", 2, 350,50, FaceUp};


    /*for(int n=1;n<=4;n++)
    {
    	Card c;
    	c.color="blue";
    	c.colorString="blue";
    	c.CardNum = n;
    	c.x=50*n;
    	c.y=50;
    	c.s=FaceUp;
    	DrawCard(c);

    }*/
	vector<Card>deck;
	FillDeck(deck);
	SetCardPositions(deck);
	for(int i=0;i<deck.size();i++)
		{
			DrawCard(deck[i] );
		}
}


__INTERACTION_FUNCTIONS_END__

int main()
{
	cout << "Start Graphics";
    startGraphics(1500, 1000, "p");
    waitForClose();
    cout << "Window closed.\n";
}
/*random_shuffle(myvector.begin(),myvector.end())			(for question 12)
{

}*/

void SetCardPositions(vector<Card> & deck)
{
	for(int r=0;r<3;r++)
	{
		int i=0;
		for(int c=0;c<8;c++)
		{
			deck[i].x=100*c;
			deck[i].y=200*r;
		}
	}
}
void FillDeck(vector<Card> & deck)
{
	for(int n=1;n<=4;n++)
	    {
	    	Card c;
	    	c.CardNum = n;
	    	c.s=FaceUp;

	    	c.color=Card1;
	    	c.colorString="Red";
	    	deck.push_back(c);
	    	deck.push_back(c);

	       	c.color=Card2;
	   	   	c.colorString="Blue";
	   	   	deck.push_back(c);
	   	   	deck.push_back(c);

	       	c.color=Card3;
	       	c.colorString="Green";
	       	deck.push_back(c);
	       	deck.push_back(c);
	   }
}
void DrawCard(Card & c)
{
	const int CardWidth=100;
	const int CardHeight=200;

	if (c.s == FaceUp)
	{
		fillColor(c.color);
		rect(c.x, c.y, CardWidth, CardHeight);
		fillColor("Black");
		text(IntToString(c.CardNum), c.x+30, c.y+50, 32);
	}
	if (c.s == FaceDown)
		{
			fillColor(c.color);
			rect(c.x, c.y, CardWidth, CardHeight);
			fillColor("black");
		}
	if (c.s == Out)
		{
			fillColor(c.color);
			rect(c.x, c.y, CardWidth, CardHeight);
			fillColor("white");
		}




}
