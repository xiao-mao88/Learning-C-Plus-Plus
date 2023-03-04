#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  string leader="";
  int num=0, guess=0, streak=0;
  int longest=0;
  bool gameon=true;
  cout << "Test your luck 1 or 2!"<<endl;
  cin>>guess;
  srand(time(NULL));
  num=rand()%2+1;
  while(gameon)
  {
    int num=0, guess=0, streak=0;
    while(num==guess)
    {
      cout<<"You guessed correctly! 1 or 2 "<<endl;
      num=rand()%2+1;
      cin>>guess;
      streak++;
      if(streak%5==0)
      {
        cout<<"Woah! "<<streak<<" in a row! ";
      }
    }
    if(streak>longest)
    {
      longest=streak;
      cout<<"New high score! Enter Name: ";
      getline(cin,leader);
      getline(cin,leader);
    }
    if(longest>0)
    {
      cout<<"\n\nLeaderboard:\n\n-------------------------\n\nName: "<<leader<<endl<<" Score: "<<longest;
    }
    int resp;
    cout<<endl<<endl<<"Play again?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
    cin>>resp;
    if(resp==2)
    {
      gameon=false;
    }
    else
    {
      cout<<"Guess again!"<<endl;
      cin>>guess;
    }
  }
  cout<<"Game Over!"<<endl<<"Your streak is "<<streak;
}