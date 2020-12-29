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

int main()
{
    int numProgram = 0;
    for(int x = 0; x<=1;x++)
    {
        cout<<"Menu: Choice 1 2 3 4 5 or 6"<<endl;
        cout<< "1) Trivia"<<endl;
        cout<< "2) Temperature Table"<<endl;
        cout<< "3) Distance Table"<<endl;
        cout<< "4) Voting Counter"<<endl;
        cout<< "5) Price Calculator"<<endl;
        cout<< "6) Movie Rating"<<endl;
        cin>>numProgram;
        if(numProgram == 1)
        {
            int answer = 0;
            int guess = 1;
            cout<<"How old am I?"<<endl;
            cin>>answer;
            while(answer != 19)
            {
                cout<<"That is wrong. Guess again."<<endl;
                guess = guess + 1;
                cin>>answer;
            }
            if(guess <= 1 && guess < 3)
            {
                cout<<"You have tried "<< guess <<" many times."<<endl;
                cout<<"You get an A!"<<endl;
                return 0;
            }
            if(guess >= 3 && guess < 5)
            {
                cout<<"You have tried "<< guess <<" many times."<<endl;
                cout<<"You get an B!"<<endl;
                return 0;
            }
            if(guess >= 5 && guess < 7)
            {
                cout<<"You have tried "<< guess <<" many times."<<endl;
                cout<<"You get an C!"<<endl;
                return 0;
            }   
            if(guess >= 7 && guess < 9)
            {
                cout<<"You have tried "<< guess <<"many times."<<endl;
                cout<<"You get an D!"<<endl;
                return 0;
            }
                if(guess >= 9)
            {
                cout<<"You have tried "<< guess <<" many times."<<endl;
                cout<<"You get an F!"<<endl;
                return 0;
        
            }
        }
        else if(numProgram == 2)
        {
            cout << fixed << setprecision (2);
            cout << left << setw (20) << "Celsius" << right << setw (20) << "Fahrenheit" <<endl;
            for(float i = 0; i <= 100; i++)
            {
                cout.precision(1);
                cout << left << setw (20) << i << right << setw (20) << (i*(9/5))+ 32 <<endl;
            }
            return 0;
        }
        else if(numProgram == 3)
        {
            double totalDistance = 0.0;
            int speed = 0.0;
            cout<<"How far do you need to travel in miles"<<endl;
            cin>>totalDistance;
            cout<<"How fast are you driving in mph?"<<endl;
            cin>>speed;
            cout << fixed << setprecision (2);
            cout << left << setw (20) << "Hours" << right << setw (20) << "Distance" <<endl;
            double distance = 0;
            int i = 1;
            while(distance < totalDistance)
            {
                distance = i*speed;
                cout.precision(1);
                cout << left << setw (20) << i << right << setw (20) << distance <<endl;
                i++;
            }
            return 0;
        }
        else if(numProgram == 4)
        {
            string vote = "";
            int poke = 0;
            int nar = 0;
            int dgb = 0;
            cout<<"Please enter your vote."<<endl;
            for(int i=0;i<4;i++)
            {
                cout<<"Pokemon, Naruto, or DBGz ? ";
                cin>>vote;
                for (int x=0; vote[x]; x++){
                vote[x] = tolower(vote[x]);
                }
                if(vote == "pokemon")
                {
                    poke++;
                }
                if(vote == "naruto")
                {
                    nar++;   
                }
                if(vote == "dbgz")
                {
                    dgb++;
                }
            }
            cout<<"Results"<<endl;
            cout<<"-----------"<<endl;
            cout<<"Pokemon: "<<poke<<endl;
            cout<<"Naruto: "<<nar<<endl;
            cout<<"Dgbz: "<<dgb<<endl;
            return 0;
        }
        else if(numProgram == 5)
        {
            double price = 0.0;
            double total = 0.0;
            cout<<"Please enter 5 prices:"<<endl;
            for(int i=0; i<5; i++)
            {
                cout<<"Item "<<i+1<<": ";
                cin>>price;
                double plusTax = price*1.09;
                cout<<"Plus tax, it is "<<plusTax<<endl;
                total = total + plusTax;
            }
            cout<<"The total of all the prices is: "<<total<<endl;
            double average = total/5;
            cout<<"The average of the prices is "<<average<<endl;
            return 0;
        }
        else if(numProgram == 6)
        {
            string movie = "";
            int rating = 0;
            int average = 0;
            cout<<"Please name 5 movie titles:"<<endl;
            for(int x=0;x<5;x++)
            {
                cout<<"Please enter movie titles:"<<endl;
                cin>>movie;
                cout<<"Please enter your rating:"<<endl;
                cin>>rating;
                while (!(rating <= 5 && rating>=1))
                {
                    cout<<"Please enter a valid rating from between 1-5"<<endl;
                    cin>>rating;
                }
                average = (average + rating);
            }
            cout<<"Your average rating is " <<average/5<<"."<<endl;
            return 0;
        }
        else
            {
            cout<<"Please select a valid program."<<endl;
            x = 0;
            }
        }   
return 0;
}