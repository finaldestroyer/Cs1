/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void RestaurantData()
{
    int COLS = 3;
    int ROWS = 4;
    string restaurant[ROWS] = { "In-N-Out","McDonalds","Popeyes", "KFC"};
	string category[COLS] = { "Rate the food", "Rate the service","Rate the decor"};
	int rates[ROWS][COLS];
	for (int r = 0; r < ROWS; r++)
	{
		cout << "Restaurant: " << restaurant[r] << endl;
		for (int c = 0; c < COLS; c++)
		{
		    cout << category[c]<< ": ";
			cin >> rates[r][c];
		}
	}
	cout << endl;
	cout << setw(25) << " ";
	for (int c = 0; c < COLS; c++)
	{
        cout << setw(20) << category[c];
    }
	cout << endl;
	cout << fixed << setprecision(2);
	for (int r = 0; r < ROWS; r++)
	{
		cout << setw(25) << restaurant[r];
		for (int c = 0; c < COLS; c++)
		{
			cout << setw(20) << rates[r][c];
		}
		cout << endl;
	}

    return 0;
}
void Tictactoe()
{
    int COLS = 3;
    int ROWS = 3;
    string TICTACTOE[ROWS][COLS];
    for(int r = 0; r<ROWS;r++)
    {
        for(int c = 0; c<COLS;c++)
        {
            TICTACTOE[r][c] = "-";
        }
    }
    cout << fixed << setprecision(2);
    for(int r = 0; r<ROWS;r++)
    {
        for(int c = 0; c<COLS;c++)
        {
            cout << setw(2)<<TICTACTOE[r][c];
        }
        cout<<endl;
    }
    int ChoiceRow=0;
    int ChoiceColumn=0;
    bool pass= true;
    while(pass == true)
    {
        for(int r = 0; r<ROWS;r++)
            {
            for(int c = 0; c<COLS;c++)
                {
                if(TICTACTOE[r][c] == "-")
                {
                    TICTACTOE[r][c] = "X";
                    pass= true;
                }
                else{
                    cout<<"**That Position has already been played"<<endl;
                    cout<<"Pick a row and column (1-3)."<<endl;
                    cout<<"Rows: ";
                    cin>>ROWS;
                    cout<<"Column: ";
                    cin>>COLS;
                    }
                }
            }
    }
    return 0;
}
bool Contains (string text, string target)
{
    if(target.size() > text.size())
        return false;
    for (int i = 0; i < text.size(); i++){
        int j = 0;
        if(text[i] == target[j]){
            while (text[i] == target[j] && j < target.size()){
                j++;
                i++;
            }

            if (j == target.size())
                    return true;
        }
    }
    return false;
}
int CountWords(string text)
{
    int Num=1;
    for(int i=1;i<text.size();i++){
        if(x[i]==' ' && x[i-1] != ' ')
        {
            Num++;
        }    
    }
    return Num;
    cout<<"Line contains "<< Num <<" words."<<endl;
    
void ProcessFile()
{
    cout<<"Please choose a file name to open. Only A, B, or C please."<<endl;
    cout<<"(A) Word counts"<<endl;
    cout<<"(B) Search"<<endl;
    cout<<"(C) Quit"<<endl;
    string filenamechoice = "";
    cin>>filenamechoice;
    while(filenamechoice != "A" ||filenamechoice != "B"||filenamechoice != "C"||filenamechoice != "a"||filenamechoice != "b"||filenamechoice != "c")
    {
        cout<<"Please choose a valid choice."
        cin>>filenamechoice;
    }
    if(filenamechoice == "A"||filenamechoice == "a")
    {
        string text ="";
        cout<<"Please type a phrase and I will tell you the number of words in your phrase."<<endl;
        cin>>text;
        CountWords(string text);
    }
    if(filenamechoice == "B"||filenamechoice == "b")
    {
        string text ="";
        string target ="";
        cout<<"What string are you looking for in the a text?"<<endl;
        cout<<"Text: ";
        cin>>text;
        cout<<"Target: ";
        cin>>target;
        Contains (string text, string target);
    }
    if(filenamechoice == "C"||filenamechoice == "c")
    {
        return 0;
    }
}