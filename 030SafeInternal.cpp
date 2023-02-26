#include <iostream>
using namespace std;

int main() {
  int food;
  cout << "Which type of food are you cooking?"<<endl;
  cout<<"1. Poultry"<<endl;
  cout<<"2. Beef"<<endl;
  cout<<"3. Pork"<<endl;
  cout<<"4. Lamb"<<endl;
  cout<<"5. Fish"<<endl;
  cout<<"6. Other"<<endl;
  cin>>food;
  switch (food)
  {
    case 1:
    cout<<"Your recommended internal temperature is 165F.";
    break;

    case 2:
    case 4:
    cout<<"Your recommended internal temperature is 160F.";
    break;

    case 3:
    cout<<"Your recommended internal temperature is 170F.";
    break;

    case 5:
    cout<<"Your recommended internal temperature is 145F.";
    break;

    default:
    cout<<"Your recommended internal temperature is 140F.";
  }
}