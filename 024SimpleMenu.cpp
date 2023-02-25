#include <iostream>
using namespace std;

int main() {
  int choice;
  cout<<"Please choose today's meal from the following options: "<<endl;
  cout<<"1. Dimsum"<<endl;
  cout<<"2. Hotpot"<<endl;
  cout<<"3. Noodles"<<endl;
  cin>>choice;

  switch(choice)
  {
    case 1:
    cout<<"You have chosen Option 1! Your dimsum will be coming out shortly.";
    break;

    case 2:
    cout<<"You have chosen Option 2! Your Hotpot will be coming out shortly.";
    break;

    case 3:
    cout<<"You have chosen Option 3! Your noodles will be coming out shortly.";
    break;

    default:
    cout<<"You have chosen an invalid option. Please try again.";
  } 
}