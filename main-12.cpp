//============================================================================
// Name        : Name.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

int main() {
vector<string> fname;
vector<string> mname;
string namein;
string nameSearch;
ifstream fin;
fin.open("names-f");
do
{
	getline(fin, namein);
	fname.push_back(namein);
}
while (fin.eof() == false);
fin.close();
fin.open("names-m");
do
{
	getline(fin, namein);
	mname.push_back(namein);
}
while (fin.eof() == false);
fin.close();
bool found = false;
cout << "Search for a name" << endl;
getline (cin, nameSearch);
for(int i = 0; i < 5000; i++)
{
	if (nameSearch == fname[i])
	{
		found = true;
		cout << nameSearch << " was #" << i+1 << " on the list of female names." << endl;
	}
}
if (found == false)
{
	cout << nameSearch << " was not found on the list of female names." << endl;
}
found = false;
	for(int i = 0; i < 5000; i++)
{
	if (nameSearch == mname[i])
		{
			found = true;
			cout << nameSearch << " was #" << i+1 << " on the list of male names." << endl;
		}

}
	if (found == false)
	{
		cout << nameSearch << " was not found on the list of male names." << endl;
	}
	return 0;
}
