#include <iostream>
using namespace std;
void Fact(int num, int r=1)
{
  if(1<=num)
  {
    r=num*r;
    num--;
    Fact(num, r);
  }
  else
  {
    cout<<"Factorial: "<<r;
  }
}

int main() {
  int choice,num;
  cout<<"This program will take in an integer less than or equal to 10 and give the factorial.";
  do
  {
    cout<<endl<<"Integer: ";
    cin>>num;
    if (num>10)
    {
      cout<<"YOU HAVE TO INPUT AN INTEGER LESS THAN 10!!! OWO"<<endl<<endl;
    }
    else
    {
      Fact(num);
      cout<<endl;
    }
    cout<<"Would you like another go?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
    cin>>choice;
  }while(choice==1);
}