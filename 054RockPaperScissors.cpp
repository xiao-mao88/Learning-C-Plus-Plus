#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
  int play,times;
  string name;
  cout<<"This is a game of rock, paper, scissor against the computer. What is your name, player?"<<endl;
  getline(cin,name);
  do
  {
    srand(time(NULL));
    int choice, computer, plays=0;
    int p1=0, p2=0;
    cout<<"How many times would you like to play? (odd number)"<<endl;
    cin>>times;
    if(times%2!=0)
    {
      cout<<"1. Rock"<<endl<<"2. Paper"<<endl<<"3. Scissor"<<endl;
      while(plays<=times&&times/2>=p1&&times/2>=p2)
      {
        cin>>choice;
        computer=rand()%3+1;
        if((choice==1&&computer==2)||(choice==2&&computer==3)||(choice==3&&computer==1))
        {
          cout<<"Computer Wins +1"<<endl;
          p2++;
          plays++;
        }
        if((choice==1&&computer==3)||(choice==2&&computer==1)||(choice==3&&computer==2))
        {
          cout<<name<<" Wins +1"<<endl;
          p1++;
          plays++;
        }
        if(choice==computer)
        {
          cout<<"Draw."<<endl;
        }
      }
    }
    else
    {
      cout<<"Invalid number. Please try again."<<endl;
    }
    if(p1>p2)
    {
      cout<<"Congratulations "<<name<<", you have won against the computer!"<<endl;
    }
    else
    {
      cout<<"The computer has won against you, too bad"<<endl;
    }
    cout<<"Would you like to play again?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
    cin>>play;
  }while(play==1);
}