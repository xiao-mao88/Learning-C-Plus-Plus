#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
  int num, answer;
  cout<<"Please enter a number greater than zero: ";
  cin>>num;
  while(num>0)
  {
    answer=num%10;
    switch(answer)
    {
      case 1:
      cout<<"You're a cool person for following directions!"<<endl<<endl;
      break;

      case 2:
      cout<<"Good job following directions"<<endl<<endl;
      break;

      case 3:
      cout<<"You're awesome for following directions!"<<endl<<endl;
      break;

      case 4:
      cout<<"You are a good child for following directions!"<<endl<<endl;
      break;

      case 5:
      cout<<"OwO"<<endl<<endl;
      break;

      case 6:
      cout<<"Great job! You followed directions!."<<endl<<endl;
      break;

      case 7:
      cout<<"How's it like being the cool kid? :)"<<endl<<endl;
      break;

      case 8:
      cout<<"Whoooohoooo! Go again!"<<endl<<endl;
      break;

      case 9:
      cout<<"Yaaaayyyyy! You are awesome at following directions."<<endl<<endl;
      break;

      default:
      cout<<"Thanks for following directions! You get to play again!"<<endl<<endl;
      break;
    }
    
    cout<<"Please enter a number greater than zero: ";
    cin>>num;
  }
  if(num<=0)
  {
    cout<<endl<<"Why you no follow directions! Bad bad child! Restart and try again. / ಠ_ಠ /";
  }
}