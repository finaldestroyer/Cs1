#include <iostream>
#include <algorithm>
#include <unistd.h>
#define USE_INTERACTION_FUNCTIONS
#include "lpcgraphics.h"
#include "utility.h"
using namespace std;

enum Condition { FACEUP, FACEDOWN, FACEOUT};
struct Card
{
    string colorName;
    Color rgbColor;
    int number;
    int x;
    int y;
    Condition status;
};

Color oneColor ("red");
Color twoColor ("blue");
Color threeColor ("green");
Color inColor ("white");
Color outColor ("black");

vector<Card> stack;
const int CARDWIDTH = 100;
const int CARDHEIGHT = 200;
int pairCounter = 0;
int faceUpCounter = 0;
int numberUpOne = 0;
int numberUpTwo = 0;
string colorUpOne;
string colorUpTwo;

void FillDeck(vector<Card> & deck);
void DrawCard(Card & c);
void SetCardPositions(vector<Card> & deck);
bool PointIsInCard(int pointX, int pointY, Card & c);
void Shuffle(vector<Card> & deck);

__INTERACTION_FUNCTIONS__

void setup()
{
    FillDeck(stack);
    Shuffle(stack);
    SetCardPositions(stack);
    for (int i = 0; i < stack.size(); i++)
    {
        DrawCard(stack[i]);
    }
}
void DrawCard(Card & c)
{
    fillColor(inColor);
    rect (c.x, c.y, CARDWIDTH, CARDHEIGHT);
}
void FillDeck(vector<Card> & deck)
{
    for (int i = 0; i < 24; i ++)
    {
        Card c;
        c.status = FACEDOWN;
        if (i < 8)
        {
            c.rgbColor = oneColor;
            c.colorName = "red";
        }
        else if (i < 16 && i >= 8)
        {
            c.rgbColor = twoColor;
            c.colorName = "blue";
        }
        else
        {
            c.rgbColor = threeColor;
            c.colorName = "green";
        }
        if (i%8+1 <= 2)
        {
            c.number = 1;
        }
        else if (i%8+1 <= 4 && i%8 + 1 > 2)
        {
            c.number = 2;
        }
        else if (i%8+1 <= 6 && i%8 + 1 > 4)
        {
            c.number = 3;
        }
        else if (i%8+1 <= 8 && i%8 + 1 > 6)
        {
            c.number = 4;
        }
        deck.push_back(c);
    }
}
void SetCardPositions(vector<Card> & deck)
{
    for (int i = 0; i < deck.size(); i++)
    {
        if (i < 6)
        {
            deck[i].y = 0;
            deck[i].x = i*CARDWIDTH;
        }
        else if (i >= 6 && i < 12)
        {
            deck[i].y = CARDHEIGHT;
            deck[i].x = (i-6)*CARDWIDTH;
        }
        else if (i >= 12 && i < 18)
        {
            deck[i].y = CARDHEIGHT*2;
            deck[i].x = (i-12)*CARDWIDTH;
        }
        else if (i >= 18 && i <24)
        {
            deck[i].y = CARDHEIGHT*3;
            deck[i].x = (i-18)*CARDWIDTH;
        }
    }
}
bool PointIsInCard(int pointX, int pointY, Card & c)
{
    if (pointX > c.x && pointX < c.x + CARDWIDTH && pointY > c.y && pointY < c.y + CARDHEIGHT)

    {
        return true;
    }
    else
    {
        return false;
    }
}
void mousePressed()
{
    for (int i = 0; i < stack.size(); i++)
    {
        if (PointIsInCard(mouseX(), mouseY(), stack[i]) == true && stack[i].status == FACEDOWN)
        {
            fillColor(inColor);
            rect (stack[i].x, stack[i].y, CARDWIDTH, CARDHEIGHT);
            fillColor(stack[i].rgbColor);
            text(IntToString(stack[i].number), stack[i].x + 40, stack[i].y + 80, 40);
            stack[i].status = FACEUP;
            faceUpCounter++;
            if (faceUpCounter == 1)
            {
                numberUpOne = stack[i].number;
                colorUpOne = stack[i].colorName;
                faceUpCounter++;
            }
            else
            {
                numberUpTwo = stack[i].number;
                colorUpTwo = stack[i].colorName;
                faceUpCounter++;
                if (numberUpOne == numberUpTwo && colorUpOne == colorUpTwo)
                {
                    pairCounter++;
                    faceUpCounter = 0;
                    for (int i = 0; i < stack.size(); i++)
                    {
                        if (stack[i].status == FACEUP)
                        {
                            fillColor(outColor);
                            rect (stack[i].x, stack[i].y, CARDWIDTH, CARDHEIGHT);
                            stack[i].status = FACEOUT;
                        }
                    }
                    if (pairCounter == 12)
                    {
                        fillColor(inColor);
                        text("GAME OVER", 100, 350, 100);
                    }
                }
                else
                {
                    for (int i = 0; i < stack.size(); i++)
                    {
                        if (stack[i].status != FACEOUT)
                        {
                            fillColor(inColor);
                            rect (stack[i].x, stack[i].y, CARDWIDTH, CARDHEIGHT);
                            stack[i].status = FACEDOWN;
                        }
                    }
                    faceUpCounter = 0;
                }
            }
        }
    }
}

void Shuffle(vector<Card> & deck)

{
    random_shuffle(deck.begin(), deck.end());
}

__INTERACTION_FUNCTIONS_END__


int main()

{
    startGraphics(600, 800, "Card Game Exercise");
    waitForClose();
}
