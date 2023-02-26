#include <iostream>
using namespace std;

int main() {
  int period;
  cout << "What period are you in? ";
  cin>>period;
  switch(period)
  {
    case 1:
    cout<<"You are in your Biology Honors Class.";
    break;

    case 2:
    cout<<"You are in Study Hall.";
    break;

    case 3:
    cout<<"You are in Gym Class.";
    break;

    case 4:
    cout<<"You are at Lunch! OwO";
    break;

    case 5:
    case 6:
    cout<<"You are in your Spanish 3H Class.";
    break;

    case 7:
    case 8:
    cout<<"You are in your Algebra II Honors Class.";
    break;

    case 9:
    case 10:
    cout<<"You are in your Social Studies Accelerated Class.";
    break;

    case 11:
    cout<<"You are in your English Accelerated Class";
    break;

    case 12:
    cout<<"You are in Computer Science Class.";
    break;
  }
}