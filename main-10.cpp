#include <iostream>
using namespace std;

void ClearScreen();
string GetName(string prompt);
string GetMove();
int CompareMoves(string move1, string move2);
void PlayOneRound(string player1, string player2, int & score1, int & score2);
void PlayAllRounds(int numRounds, string player1, string player2);
void PlayRPS();
int InputInt();

void ClearScreen()
{
	// TO DO:
	// (1) Simulate clearing the screen by printing 50 blank lines.
	//      Hint - You should use a for loop for this!
	//      Please do NOT use a specific operating system command
	//       that actually clears the screen.
  
for(int i=0;i<50;i++)
 {
    cout<<""<<endl;   
 }
}

string GetName(string prompt)
{
	// TO DO:
	// (1) Print the prompt specified by the prompt parameter
	// (2) Input an entire line from the user
	// (3) Do input validation, repeating the prompt and input if the user
	//      enters an empty line
	// (4) Return the string the user entered
	
	string name="";
	cout<<"Please enter your name."<<endl;
	cin>>name;
	while(name == "\n")
	{
	    cout<<"Please enter a valid name."<<endl;
	    cin>>name;
	}
	return name;
}

string GetMove()
{
	// TO DO:
	// (1) Prompt the user with "Pick a move -- rock, paper, or scissors: " and input a string.
	// (2) Do input validation, repeating the input step if the user doesn't pick a valid choice.
	// (3) Return the item the user picked.
	string playerChoice = "";
	cout<<"Pick a move -- rock, paper, or scissors: "<<endl;
	cin>>playerChoice;
	for (int i=0;i<playerChoice.length();i++){ 
         playerChoice[i]=tolower(playerChoice[i]);
	}
	while(playerChoice !="rock"||playerChoice != "paper"||playerChoice != "scissors")
	{
	    cout<<"Please enter valid answer."<<endl;
	    cin>> playerChoice;
	}
	return playerChoice;
}

int CompareMoves(string move1, string move2)
{
    int results = 0;
	// TO DO:
    // (1) Compare move1 with move2, determining which one "beats" the other,
	//      based on standard rock-paper-scissors rules.
	//     Each parameter will already be set to "rock" or "paper" or "scissors".
	//
	// (2) Return a single int indicating the result:
	//       0 for a tie, 1 if move1 beats move2, 2 if move2 beats move1.
	while(move1==move2){
	    results = 0;
	    return results;
	}
	while(move1=="scissors"){
	    if(move2=="rock")
	    {
	        results = 2;
	        return results;
	    }
	    if(move2 =="paper")
	    {
	        results = 1;
	        return results;
	    }
	}
	while(move1=="rock"){
	    if(move2=="scissors")
	    {
	        results = 1;
	        return results;
	    }
	    if(move2 =="paper")
	    {
	        results = 2;
	        return results;
	    }
	}
	while(move1=="paper"){
	    if(move2=="scissors")
	    {
	        results = 2;
	        return results;
	    }
	    if(move2 =="rock")
	    {
	        results = 1;
	        return results;
	    }
	}
	
}
	int player1Score=0;
    int player2Score=0;
void PlayOneRound(string player1, string player2, int & score1, int & score2)
{
    int results = 0;
    string Player1 ="";
    string Player2 ="";
	cout << "==== " << player1 << "'s turn ====" << endl;
	cout << "(other player, please don't watch!)" << endl;
	// TO DO:
	// (1) By calling the GetMove function, get player 1's move and store it in a variable
    Player1 = GetMove();
	ClearScreen();

	cout << "==== " << player2 << "'s turn ====" << endl;
	cout << "(other player, please don't watch!)" << endl;
	// TO DO:
	// (2) By calling the GetMove function, get player 2's move and store it in a variable
    Player2 = GetMove();
    ClearScreen();
	// (3) By calling the CompareMove function, get information about the winner of this round
	//      and store it in a variable.
	CompareMoves(Player1,Player2);
	ClearScreen();

	// TO DO:
	// (4) Print a line of output to summarize what happened in this round, using
	//      the result from (3). This should follow this sequence of formats:
	//      "____ played ____."
	//      "____ played ____."
	//      "____ won!"     (Or "It was a tie.")
    cout<<"Player1 played "<<Player2<<"."<<endl;
	cout<<"Player2 played "<<Player2<<"."<<endl;
	if(results == 1)
	{
	cout<<"Player 1 won!"<<endl;
	player1Score++;
	}
	if(results == 1)
	{
	cout<<"Player 2 won!"<<endl;
	player2Score++;
	}
	if(results == 0)
	{
	cout<<"It was a tie."<<endl;
	}
	// (5) If one of the player's one this round, increment the corresponding score.
    cout<<"Player 1 score is "<<player1Score<<endl;
    cout<<"Player 2 score is "<<player2Score<<endl;

}

void PlayAllRounds(int numRounds, string player1, string player2)
{
	// NOTE: This function is ALREADY COMPLETE. No additions needed!

	// Variables for the players' scores
	int player1score = 0;
	int player2score = 0;

	for (int i = 1; i <= numRounds; i++)
	{
		cout << endl;
		cout << "Beginning Round #" << i << endl;
		cout << endl;
		PlayOneRound(player1, player2, player1score, player2score);
	}

	cout << endl << endl;
	cout << "Final results: " << endl;
	cout << player1 << " won " << player1score << " times" << endl;
	cout << player2 << " won " << player2score << " times" << endl;
}

void PlayRPS()
{
	// NOTE: This function is ALREADY COMPLETE. No additions needed!

	// Variables for the players' names
	string name1 = "";
	string name2 = "";

	// Variable for the number of rounds
	int userRounds = 0 ;

	// Here we set up variables by asking the user some questions
	name1 = GetName("First player, what is your name? ");
	name2 = GetName("Second player, what is your name? ");
	cout << "How many rounds do you want to play? ";
	userRounds = InputInt();

	// Now we call PlayAllRounds() to handle the actual rounds
	PlayAllRounds(userRounds, name1, name2);
}

int InputInt()
{
	// NOTE: This function is ALREADY COMPLETE. No additions needed!

	int userInput;
	cin >> userInput;
	/// input validation
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "** Invalid! You must enter an int: ";
		cin >> userInput;
	}
	cin.ignore(1000, '\n');
	return userInput;
}

