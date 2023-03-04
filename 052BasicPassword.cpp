#include <iostream>
using namespace std;

int main() {
  int times, tries=10;
  string guess;
  do
  {
    cout<<"Guess the password! You have "<<tries<<" tries."<<endl;
    getline(cin,guess);
    times++;
    tries--;
    switch(times)
    {
      case 5:
      cout<<"Hint: The best feline animal in the world."<<endl;
    }
  }while(times<10&&guess!="cat");
  if(guess=="cat")
  {
    cout<<"Congratulations! You guessed the password in "<<times<<" tries";
  }
  if(guess!="cat")
  {
    cout<<"You have been locked out. :(";
  }
}