#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
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
  cout<<"I guessed your number in "<<times<<" tries";
}