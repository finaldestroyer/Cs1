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

int main()
{
    string program= "";
    for(int i = 0; i <= 1; i++){
    cout<<"MENU: Choice A B C or D"<<endl;
    cout<<"A) Arithmetic Tutor" <<endl;
    cout<<"B) Astronaut Weight Report" <<endl;
    cout<<"C) Speed Check" <<endl;
    cout<<"D) CS Club" <<endl;
    cin>>program;
    for (int x=0; program[x]; x++){
        program[x] = tolower(program[x]);
    }
    if(program == "a"){
        srand (time(NULL));
        int d1 = rand () % 999 + 100;
        int d2 = rand() % 999 + 100;
        int total = d1 + d2;
        int a1 = 0;
        cout << fixed << setprecision (2);
        cout<<"Can you finish this quiz?"<<endl;
        cout <<right << setw (4) << d1 <<"\n"<< "+"<<d2<<"\n"<<"----"<<"\n"<<"????"<<endl;
        cin>>a1;
        if(total == a1){
            cout<<"You are correct!"<<endl;
            break;
        }
        else{
            cout<<"You are wrong!"<<endl;
            break;
        }
    }
    else if(program == "b"){
        string name = "";
        double wS;
        cout<<"What is your name?"<<endl;
        cin>>name;
        cout<<"What is your mass in pounds?"<<endl;
        cin>>wS;
        cout << fixed << setprecision (2);
        cout << left << setw (20) << "Mission report for " << right << setw (20) << name <<endl;
        cout << left << setw (20) << "Weight on Earth:" << right << setw (20) << wS << endl;
        cout << left << setw (20) << "Weight on Venus:" << right << setw (20) << wS * 0.907 << endl;
        cout << left << setw (20) << "Weight on Mars:" << right << setw (20) << wS * 0.377 << endl;
        cout << left << setw (20) << "Weight on Jupiter:" << right << setw (20) << wS * 2.364 << endl;
        break;
    }
    else if(program == "c"){
        int speedLimit = 0;
        double miles = 0.0;
        double timeReached = 0.0;
        cout<<"What is the speed limit?"<<endl;
        cin>>speedLimit;
        cout<<"How far did you drive your car, in miles?"<<endl;
        cin>>miles;
        cout<<"How long did it take to drive that distance, in whole minutes?"<<endl;
        cin>>timeReached;
        double speed = miles/(timeReached/60.0);
        cout<<"Your speed was "<<speed<<" MPH."<<endl;
        if (speed == speedLimit){
            cout<<"You were traveling exactly at the speed limit."<<endl;
            break;
        }
        if (speed > speedLimit){
            cout<<"You were traveling over the speed limit."<<endl;
            break;
        }
        if (speed < speedLimit){
            cout<<"You were traveling under the speed limit."<<endl;
            break;
        }
    }
    else if(program == "d" || program =="D" ){
        double age = 0.0;
        string pass = "";
        cout<<"How old are you?"<<endl;
        cin>>age;
        if(age >= 18){
            cout<<"What is the password?"<<endl;
            cin>>pass;
            for (int x=0; pass[x]; x++){
                pass[x] = tolower(pass[x]);
            }
            if(pass == "hello"){
                cout<<"You may enter."<<endl;
                break;
            }
            else{
                cout<<"The password you have enter is invalid"<<endl;
                break;
            }
        }
        else{
            cout<<"You are not old enough to enter."<<endl;
            break;
        }
    }
        else{
            cout<<"Please enter a valid answer."<<endl;
            i = 0;
        }
    }
    return 0;
}



