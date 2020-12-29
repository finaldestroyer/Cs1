#include <iostream>

using namespace std;

int
main ()
{
  string ok = "";
  string character = "";
  string poke = "";
  string monster = "";
  cout << "What is your favorite anime? Pokemon or Naruto or Yugioh?" << endl;
  cin >> ok;
  if (ok == "pokemon" || ok == "Pokemon")
    {
      cout << "Oh that's cool." << endl;
      cout << "What's your favorite pokemon? Pikachu or Charmander?" << endl;
      cin >> poke;
      if (poke == "pikachu" || poke == "Pikachu")
	{
	  cout << "Pikachu use thunderbolt" << endl;
	}
      else if (poke == "Charmander" || poke == "charmander")
	{
	  cout << "Charmander use Fire Blast" << endl;
	}
      else
	{
	  cout << "You have failed to answer my question" << endl;
	  return 0;
	}
    }
  if (ok == "Naruto" || ok == "naruto")
    {
      cout << "Oh that's cool." << endl;
      cout << "Who is your favorite character? Naruto or Sasuke?" << endl;
      cin >> character;
      if (character == "naruto" || character == "Naruto")
	{
	  cout << "Rasengan" << endl;
	}
      else if (character == "sasuke" || character == "sasuke")
	{
	  cout << "Chidori" << endl;
	}
      else
	{
	  cout << "You have failed to answer my question" << endl;
	  return 0;
	}
    }
  if (ok == "yugioh" || ok == "Yugioh")
    {
      cout <<
	"Who's you favorite monster? Dark Magician or Blue-eyes White Dragon? Please spell it how I spelled it."
	<< endl;
      cin >> monster;
      if (monster == "Dark Magician" || monster == "Blue-eyes White Dragon")
	{
	  cout << "DU DU DU DU DUUUUUUEEEEELLLL!!!! " << endl;
	}
      else
	{
	  cout << "You have failed to answer my question" << endl;
	  return 0;
	}
    }
  else
    {
      cout << "You have failed to answer my question" << endl;
      return 0;
    }
  return 0;
}
