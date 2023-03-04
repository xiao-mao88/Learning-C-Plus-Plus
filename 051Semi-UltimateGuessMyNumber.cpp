#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
  int choice;
  do
  {
    int game;
    cout<<"Which game would you like to play?"<<endl<<"1. Computer Guess My Number (Binary Search)"<<endl<<"2. Player Guess My Number"<<endl<<"3. Computer Guess My Number (Computer's Random Guess)"<<endl;
    cin>>game;
    if(game==1)
    {
      int f,min=1,max=100,num,times=0;
      cout << "Please think of a number between 1-100"<<endl;
      srand(time(NULL));
     while(f!=3)
      {
       num=(max+min)/2;
      cout<<"I guess: "<<num<<endl;
      cout<<"My guess was: "<<endl<<"1. Too High"<<endl<<"2. Too Low"<<endl<<"3. Correct"<<endl;
      cin>>f;
      cout<<endl;
      switch(f)
      {
        case 1:
        max=num-1;
        break;

        case 2:
        min=num+1;
        break;
      }
      times++;
      }
      cout<<"I guessed your number in "<<times<<" tries"<<endl<<"Would you like to play again?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
      cin>>choice;
      cout<<endl;
    }

      if(game==2)
      {
      int guess;
      cout << "Hello! Welcome to the number guessing game. You get 10 tries to guess the correct number between 1-100. If you win, you get a prize! (not really)"<<endl;
      srand(time(NULL));
      int numb= rand()%100+1;
      for ( int i = 0; i <10; i++)
      {
      cout<<"Guess my number: ";
      cin>>guess; 
      if(guess>numb)
      {
        cout<<"Too high."<<endl;
      }
      else if (guess<numb)
      {
        cout<<"Too low."<<endl;
      }
      }
      if(numb!=guess)
      {
        cout<<"Sorry. Your guess is wrong. The number was "<<numb;
      }
      else 
      {
         cout<<"\nCongratulations! Your guessed the number!";
      }
      cout<<endl<<"Would you like to play again?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
      cin>>choice;
      cout<<endl;
    }

    if(game==3)
    {
      int f,min=1,max=100,num,times=0;
      cout << "Please think of a number between 1-100"<<endl;
      srand(time(NULL));
      while(f!=3)
      {
      num=rand()%(max-min+1)+min;
      cout<<"I guess: "<<num<<endl;
      cout<<"My guess was: "<<endl<<"1. Too High"<<endl<<"2. Too Low"<<endl<<"3. Correct"<<endl;
      cin>>f;
      cout<<endl;
      switch(f)
      {
        case 1:
        max=num-1;
        break;

        case 2:
        min=num+1;
        break;
      }
    times++;
  }
  cout<<"I guessed your number in "<<times<<" tries"<<endl<<"Would you like to play again?"<<endl;
  cin>>choice;
    }
  }while(choice==1);
}