#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <ctime>
#include <cstdlib>
#include <boost/algorithm/string.hpp>
#include <string>
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

void rollDice(int roll)
{
    srand(time(NULL));
    for(int i=0;i<roll;i++)
    {
        cout << rand()% 6+1 <<" ";
    }
}
void fallingDistance(int timeD)
{
    cout << fixed << setprecision (2);
    cout<<left<<setw(4)<<"Time"<<right<<setw(10)<<"Distance"<<endl;
    for(int i=1;i<=timeD;i++)
    {
        double distance = 4.9 * (i*i);
        cout<<left<<setw(4)<<i<<"s"<<right<<setw(10)<<distance<<"m"<<endl;
    }
}
void SaveAccountInfo(string filename,int accNum,double money )
{
    
}
void Diagonal(double width,double height)
{
    
}
void InputWithinRange(double lowest,double highest)
{
    
}
void AskQuestion(string question, string answer1,string answer2, string answer3)
{
    
}

int main()
{
    int roll=0;
    int timeD=0;
    cout<<"How many times would you like to roll your 20 sided dice?"<<endl;
    cin>>roll;
    rollDice(roll);
    cout<<endl;
    cout<<"How many seconds would you like to fall for?"<<endl;
    cin>>timeD;
    fallingDistance(timeD);
    cout<<endl;
    
    SaveAccountInfo();
    cout<<endl;
    
    Diagonal();
    cout<<endl;
    
    InputWithinRange();
    cout<<endl;
    
    AskQuestion();
    cout<<endl;
    
    return 0;
}



