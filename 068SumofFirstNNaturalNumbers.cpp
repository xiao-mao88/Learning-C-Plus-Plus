#include <iostream>
using namespace std;
void add(int num, int r=0)
{
  int a=0;
  if(1<=num)
  {
    r=num+r;
    num--;
    add(num, r);
  }
  else
  {
    cout<<"Sum: "<<r;
  }
}

int main() {
  int num, choice;
  cout << "This program is the sum of the first n natural numbers."<<endl;
  do
  {
    cout<<endl<<"Positive integer: ";
    cin>>num;
    if (num<0)
    {
      cout<<"YOU HAVE TO INPUT A POSITIVE INTEGER!!! OWO"<<endl<<endl;
    }
    else
    {
      add(num);
      cout<<endl;
    }
    cout<<"Would you like another go?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
    cin>>choice;
  }while(choice==1);
}