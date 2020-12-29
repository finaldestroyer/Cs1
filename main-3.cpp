#include <iostream>
#include <math.h>
#include <iomanip>
#include <cmath>
#include <stdio.h>
#include <ctime>
#include <cstdlib>
#define _USE_MATH_DEFINES


using namespace std;

int
main ()
{
  srand (time (0));
  //Task 1
  string flavor = "";
  double d = 0.0;
  double slices = 0.0;
  /*    Ask the user for three pieces of information:
     The pizza flavor they want to order
     The diameter of pizza they want (in inches)
     How many slices to divide it into.
     Then, report back the area of each slice, including the flavor name. The form of the report should be:
     Each slice of that sausage pizza is 7.32 square inches.
     You will need to use the fact that: area\:of\:a\:circle\:=\:\pi r^2 
   */
  cout << "What is the pizza flavor you would like to order?" << endl;
  getline (cin, flavor);
  cout << "What is the diameter of the pizza in inches?" << endl;
  cin >> d;
  cout << "How many slices to divide into?" << endl;
  cin >> slices;
  double r = d / 2;
  double area = (M_PI) * (r * r);
  cout << "Each slice is about " << area / slices << "square inches" << endl;
  //Task 2
  /*
     string movie = "";
     double aT = 0.00;
     double cT = 0.00;
     Ask the user for a movie name and the number of child tickets ($5 each) and 
     adult tickets ($8) each that were sold in one night. Assuming the theater's 
     profit is 23% of the total sales, report back all information given along with the profit.
     Your report should look similar to this:
     Movie Name:             Titanic
     Adult Tickets Sold:          100
     Child Tickets Sold:           50
     Total Sales Amount:    $1050.00
     Profit:                 $ 241.50     
   */
  cout << "What movie boi?" << endl;
  cin >> movie;
  cout << "How many adult tickets were purchased?" << endl;
  cin >> aT;
  cout << "How many children tickets were purchased?" << endl;
  cin >> cT;
  double totalSale = (aT * 5) + (cT * 8);
  double profit = totalSale * 0.23;

  cout << fixed << setprecision (2);
  cout << left << setw (20) << "Movie name:" << right << setw (20) << movie <<
    endl;
  cout << left << setw (20) << "Adult Tickets Sold:" << right << setw (20) <<
    aT << endl;
  cout << left << setw (20) << "Child Tickets Sold:" << right << setw (20) <<
    cT << endl;
  cout << left << setw (20) << "Total Sales Amount: " << right << setw (20) <<
    "$" << totalSale << endl;
  cout << left << setw (20) << "Profit: " << right << setw (20) << "$" <<
    profit << endl;

  //Task 3
  /*Create a simple "Mad Libs" game. Ask the user for at least 7 words or phrases,
     storing each answer in a variable. (Examples: "Give me a song name", "Give me a
     location", "Give me an adjective", "Give me a color", etc.) Use the values in
     these variables to print out a short story (at least 3-5 sentences), with the 
     user's answers in place of some of the text. For instance: 
   */
  string a1 = "";
  string a2 = "";
  string a3 = "";
  string a4 = "";
  string a5 = "";
  string a6 = "";
  string a7 = "";

  cout << "Please give 7 words or phrases to complete my sentence." << endl;
  cout <<
    "Give me a song artist, Give me a location, Give me an adjective, Give me a verb, Give me a color, Give me a phone brand."
    << endl;
  cout << "First give me a song artist" << endl;
  cin >> a1;
  cout << "Give me a location" << endl;
  cin >> a2;
  cout << "Give me an adjective" << endl;
  cin >> a3;
  cout << "Give me a verb" << endl;
  cin >> a4;
  cout << "Give me a color" << endl;
  cin >> a5;
  cout << "Give me a phone brand" << endl;
  cin >> a6;
  cout << "Give me a time" << endl;
  cin >> a7;

  cout << "Heyyy!!! " << a1 << " Go on a date with me! " <<
    "Lets have some fun at " << a2 << "." << " Let's go " << a3 << a4 << "."
    << " Dont't be using your " << a5 << a6 << " at " << a7 << "." << endl;


//Task 4
  /*Help the user produce a bank account report, as follows:
     Ask what their initial deposit is.
     Ask what the interest rate is.
     Calculate their final amount after one year with this formula:
     final\:amount\:=\:\left(initial\:deposit\right)\left(1\:+\:\frac{rate}{1200}
     \right)^{12} f i n a l a m o u n t = ( i n i t i a l d e p o s i t ) 
     ( 1 + r a t e 1200 ) 12
     Print a report that matches the form below.
     (Note: This assumes the user entered 1000 for the initial deposit and 4.25 for the interest rate.)
   */
  double deposit = 0.0;
  double intRate = 0.00;
  cout << "How much would you like to deposit?" << endl;
  cin >> deposit;
  cout << "What is the interest rate of your account?" << endl;
  cin >> intRate;
  double final = deposit + ((1 + (intRate / 1200)), 12);
  cout << "Your final amount after one years is $" << final << endl;

//Task 5
  /*
     First, roll THREE separate six-sided dice. Report each roll along with the sum of the rolls.
     Ask the user "Roll again (y/n)?"
     If the user enters "y", repeat the process of rolling THREE six-sided dice. Report each roll, and then the overall total of both sets of rolls.
     Whether they rolled a second time or not, print a final output based on the final total:
     * If it is over 21, print "You lose, sorry."
     * If it 16 through 21, print "You get a gold trophy!"
     * If it 10 through 15, print "You get a silver trophy!"
     * Otherwise, print "You get a bronze trophy!"
     HINT: Use if / else if / else for this!
   */
  string rollAgain = "";
  int x = 0;
  int dice1, dice2, dice3;
  while (x < 2)
    {
      int dice1 = rand () % 6 + 1;
      cout << dice1 << endl;
      int dice2 = rand () % 6 + 1;
      cout << dice2 << endl;
      int dice3 = rand () % 6 + 1;
      cout << dice3 << endl;
      int diceAmount = dice1 + dice2 + dice3;
      cout << "The total is " << diceAmount << endl;
      cout << "Would you like to roll again?" << endl;
      cin >> rollAgain;
      if (rollAgain == "y" || rollAgain == "yes")
	{
	  x++;
	}
      if (rollAgain == "n" || rollAgain == "no")
	{
	  x = 2;
	}
      if (diceAmount > 21 && x == 2)
	{
	  cout << "You lose! Sorry." << endl;
	}
      if (diceAmount >= 16 && diceAmount <= 21 && x == 2)
	{
	  cout << "You get a gold trophy!" << endl;
	}
      if (diceAmount >= 10 && diceAmount <= 15 && x == 2)
	{
	  cout << "You get a silver trophy!" << endl;
	}
      else
	{
	  while (x == 2)
	    {
	      cout << "You get a bronze trophy!" << endl;
	    }
	}
    }
  return 0;
}
