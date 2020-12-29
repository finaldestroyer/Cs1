#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int main()
{
    srand(time(NULL));
    /*
    Generates a random number from 1 to 100.
    Asks the user to guess what the number is.
    If the user’s guess is higher than the random number, display “Too high, try again.”
    If the user’s guess is lower than the random number, display “Too low, try again."
    Repeat until the user guesses the correct number.
    */
    int secret = rand() % 100 + 1;
    int guess = 0;
    cout<<"Please guess a number between 1 to 100."<<endl;
    cout<<secret<<endl;
    cin>>guess;
    for(int i=0;i<=1;i++)
    {
        if(guess == secret)
        {
          cout<<"You are correct!"<<endl;
        }
        else if(guess < secret)
        {
            cout<<"You guess is lower than the random number. Please Try Again."<<endl;
            i = 0;
            cin>>guess;
        }
        else if(guess > secret)
        {
            cout<<"You guess is higher than the random number. Please Try Again."<<endl;
            i = 0;
            cin>>guess;
        }
        else{
            cout<<"Please give a valid answer."<<endl;
            cin>>guess;
        }
    }
    return 0;
}



