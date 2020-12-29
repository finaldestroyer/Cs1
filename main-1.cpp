/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     /* Part A  */
    double miles = 0.0;
    double gallons = 0.0;
    //Ask the user "How many miles did you drive last week?"
    cout << "How many miles did you drive last week?"<< endl;
    cin >> miles;
    //Ask the user "How many gallons of gas did you use during that time?"
    cout << "How many gallons of gas did you use during that time?" << endl;
    cin >> gallons;
    //Tell the user what their average gas mileage (MPG) was last week by dividing the number of miles by the number of gallons.
    cout << "Your average gas mileage last week was " << miles/gallons << "miles per gallons" << endl;
    
    
    /*
    Part B
    Ask the user to enter their height by prompting them for two inputs that look like this:
    feet:  (user types a number here)
    inches:  (user types another number here)
    Report the user's height back to them in total inches.
    (Ex: If they said they were 5ft 9in, they are 69 inches tall)
    Report the user's height back to them in centimeters.
    (Hint: Figure out what to multiply total inches by to get centimeters)
    */
    int feet = 0;
    int inches = 0;
    double cm = 0.0;
    cout << "What is your height? In feet then inches." << endl;
    cout << "Feet/Foot: ";
    cin >> feet ;
    cout << "Inches:";
    cin >> inches;
    int totalHeight = (feet * 12) + inches;
    cout << "Your total height is " << totalHeight  << "in" << endl;
    cout <<"In centimeters: " << totalHeight * 2.54 << "cm" << endl;
    
    
    
    /*Part C
    Ask the user for their name.
    Ask the user to enter three items purchased at a restaurant along with their /n
    prices. The resulting behavior should look like this example below -- note that /n
    text in bold is SAMPLE input only, your program will not look exactly like /n
    this, it must respond to whatever your user actually enters.
    Determine the subtotal cost by summing the three item prices. This should be stored in its own variable.
    Determine the amount of tax by multiplying the total times 0.0925
    (This represents a sales tax of 9.25%, the current rate in Livermore.)
    Print a report matching the following form. (Again, bold names and prices
    are sample data, your program should use whatever your user actually enters each time.)
    */
    string name ="";
    string item1 ="";
    double price1 = 0.00;
    string item2 = "";
    double price2 = 0.00;
    string item3 = "";
    double price3 = 0.00;

    
    cout << "What is your name?" << endl;
    cin >> name;
    cout <<"What would you like to order?" << endl;
    cout << "Item 1: ";
    cin >> item1;
    cout << "Price: ";
    cin >> price1;
    cout << "Item 2: ";
    cin >> item2;
    cout << "Price: ";
    cin >> price2;
    cout << "Item 3: ";
    cin >> item3;
    cout << "Price: ";
    cin >> price3;
    
    double subtotal = price1 + price2 + price3;
    double tax = 0.0925 * subtotal;
    double total = subtotal + tax;

    cout << name << endl;
    cout << fixed << setprecision(2);
	cout << left << setw(10) << item1 << " $" << right << setw(10) << price1 << endl;
	cout << left << setw(10) << item2 << " $" << right << setw(10) << price2 << endl;
	cout << left << setw(10) << item3 << " $" << right << setw(10) << price3 << endl;
	cout << left << setw(10) << "tax" << " $" << right << setw(10) << tax << endl;
	cout << left << setw(10) << "total" << " $" << right << setw(10) << total << endl;
	
    return 0;
    
}
