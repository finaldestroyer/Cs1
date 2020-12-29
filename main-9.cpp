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
#include <fstream>
#include <iostream>
using namespace std;

void rollDice (int roll)
{
  srand (time (NULL));
  for (int i = 0; i < roll; i++)
    {
      cout << rand () % 6 + 1 << " ";
    }
}

void fallingDistance (int timeD)
{
  cout << fixed << setprecision (2);
  cout << left << setw (4) << "Time" << right << setw (10) << "Distance" <<
    endl;
  for (int i = 1; i <= timeD; i++)
    {
      double distance = 4.9 * (i * i);
      cout << left << setw (4) << i << "s" << right << setw (10) << distance
	<< "m" << endl;
    }
}

double SaveAccountInfo (string filename, int &accNum, double &money)
{
  /*When the function runs, it must open the given file for output, then store 
     the account number and money amount into the file.
     What to do in main(): Ask the user for an account number and account 
     balance, then call the function to store that information in a file named "bank.txt"
   */
  ofstream fout;
  fout.open (filename.c_str ());
  fout << accNum;
  fout << money;

  fout.close ();

}

double Diagonal (double width, double height)
{
  double diag = 0.0;
  diag = sqrt ((width * width) + (height * height));
  return diag;

}

double InputWithinRange (double lowest, double highest)
{
  /*After the user's first input, the function must do input validation, 
     forcing them to re-enter repeatedly until they give a valid number.
     Once a valid number has been entered, the function must return the number entered.
   */
  double price = 0.0;
  while (lowest < 1 || lowest > 8)
    {
      cout << "Please enter a valid low number please." << endl;
      cin >> lowest;
    }
  while (highest > 8 || highest < 1 || highest <= lowest)
    {
      cout << "Please enter a valid high number please." << endl;
      cin >> highest;
    }
  for (double lowest; lowest < highest; lowest++)
    {
      price = price + (lowest * 0.75);

    }
  cout << "You're total amount is $" << price << endl;
}

void AskQuestion (string question, string answer1, string answer2, string answer3)
{
  int correct = 0;
  cout << question << endl;
  cout << "1) " << answer1 << endl;
  cout << "2) " << answer2 << endl;
  cout << "3) " << answer3 << endl;
  cout << "Only choose 1,2, or 3" << endl;
  cin >> correct;
  while (correct < 1 || correct > 3)
    {
      cout << "Please pick a valid answer." << endl;
      cin >> correct;
    }
  if (correct == 2)
    {
      cout << "You are correct." << endl;
    }
  else
    {
      cout << "You are incorrect!" << endl;
    }
}

int main ()
{
  int roll = 0;
  int timeD = 0;
  cout << "How many times would you like to roll your 20 sided dice?" << endl;
  cin >> roll;
  rollDice (roll);
  cout << endl;
  cout << "How many seconds would you like to fall for?" << endl;
  cin >> timeD;
  fallingDistance (timeD);
  cout << endl;
  int accNum = 0;
  double money = 0;
  cout << "What us your account number?" << endl;
  cin >> accNum;
  cout << "How much money is in your bank account?" << endl;
  cin >> money;
  SaveAccountInfo ("blank.txt", accNum, money);
  cout << endl;
  double height = 0;
  double width = 0;
  cout << "Give me a height." << endl;
  cin >> height;
  cout << "Give me a width." << endl;
  cin >> width;
  Diagonal (width, height);
  cout << endl;
  double lowest = 0;
  double highest = 0;
  /*Tell the user they can order 1 to 8 slices of pizza, at a cost of $0.75 per slice. 
     Call the InputWithinRange function to handle the input, then report the 
     cost for the number of slices the user chose. */
  cout <<
    "You can order 1 to 8 slices of pizza, at a cost of $0.75 per slice." <<
    endl;
  cout << "Please enter the low number then a high number please. From 1-8."
    << endl;
  cin >> lowest;
  cin >> highest;
  InputWithinRange (lowest, highest);
  cout << endl;
  AskQuestion ("Which phone brand do you think is better Staticstically?",
	       "Google Pixel", "Samsung S9", "IPhone X");
  cout << endl;

  return 0;
}
