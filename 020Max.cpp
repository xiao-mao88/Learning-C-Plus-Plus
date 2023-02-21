#include <iostream>
using namespace std;

int main() {
  double num1, num2;
  cout<<"Please insert first number: ";
  cin>>num1;
  cout<<"Please insert second number: ";
  cin>>num2;
  if(num1==num2)
  {
    cout<<"These two numbers are equal!";
  }
  else
  {
    if(num1>num2)
    cout<<num1<<" is greater than "<<num2;
    else if(num2>num1)
    {
      cout<<num2<<" is greater than "<<num1;
    }
  }
}