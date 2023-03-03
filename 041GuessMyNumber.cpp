#include <iostream>
using namespace std;
#include <cmath>
#include <cstdlib>

int main() {
  int guess;
  cout << "Hello! Welcome to the number guessing game. You get 10 tries to guess the correct number between 1-100. If you win, you get a prize! (not really)"<<endl;
  srand(time(NULL));
  int num= rand()%100+1;
  for ( int i = 0; i <10; i++)
  {
   cout<<"Guess my number: ";
   cin>>guess; 
   if(guess>num)
   {
     cout<<"Too high."<<endl;
   }
   else if (guess<num)
   {
     cout<<"Too low."<<endl;
   }

   else 
   {
     cout<<"\nCongratulations! Your guessed the number!";
     break;
   }
  }
  if(num!=guess)
  cout<<"Sorry. Your guess is wrong. The number was "<<num; 
}