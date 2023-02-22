#include <iostream>
using namespace std;

int main() {
  int num, guess;
  num=79;
  cout<<"What is the number you guess between 1-100? ";
  cin>>guess;
  if(1>guess||guess>100)
  {
    cout<<"U r dumb. Don't talk to me anymore.( ಠ_ಠ )";
  }
  else
  {
    if(guess==79)
    {
      cout<<"Contragulations! You have guessed the number!";
    }
    else if(guess>79)
    {
      cout<<"Too high";
    }
    else
    {
      cout<<"Too low";
    }
  }
}