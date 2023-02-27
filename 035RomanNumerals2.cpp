#include <iostream>
using namespace std;

int main() {
  int num, hundreds, tens, ones, thousands;
  cout<<"Please pick a number from 1-10000."<<endl;
  cin>>num;
  if (num>10000)
  {
    cout<<"Invalid Input. Try Again. .OwO.";
  }
  else 
  {
    cout<<"Roman Numeral: ";
  }

  thousands=num/1000;
  if(1000<=num && num<=10000)
  {
    for(int i=1; i<=thousands; i++)
    {
      cout<<"M";
    }
    cout<<" ";
  }
  hundreds=num/100%10;
  switch (hundreds)
  {
    case 1:
    cout<<"C ";
    break;

    case 2:
    cout<<"CC ";
    break;

    case 3:
    cout<<"CCC ";
    break;

    case 4:
    cout<<"CD ";
    break;

    case 5:
    cout<<"D ";
    break;

    case 6:
    cout<<"DC ";
    break;

    case 7:
    cout<<"DCC ";
    break;

    case 8:
    cout<<"DCCC ";
    break;

    case 9:
    cout<<"CM ";
  }

  tens=num/10%10;
  switch(tens)
  {
    case 1:
    cout<<"X ";
    break;

    case 2:
    cout<<"XX ";
    break;

    case 3:
    cout<<"XXX ";
    break;

    case 4:
    cout<<"XL ";
    break;

    case 5:
    cout<<"L ";
    break;

    case 6:
    cout<<"LX ";
    break;

    case 7:
    cout<<"LXX ";
    break;

    case 8:
    cout<<"LXXX ";
    break;

    case 9:
    cout<<"XC ";
    break;
  }

  ones=num%10;
  switch (ones)
  {
    case 1:
    cout<<"I ";
    break;

    case 2:
    cout<<"II ";
    break;

    case 3:
    cout<<"III ";
    break;

    case 4:
    cout<<"IV ";
    break;

    case 5:
    cout<<"V ";
    break;

    case 6:
    cout<<"VI ";
    break;

    case 7:
    cout<<"VII ";
    break;

    case 8:
    cout<<"VIII ";
    break;

    case 9:
    cout<<"IX ";
    break;
  }
}