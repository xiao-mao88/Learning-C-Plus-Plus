#include <iostream>
using namespace std;
#include <cmath>

int main() {
  int num;
  bool prime=true;
  cout << "Please enter a number greater than or equal to 2"<<endl;
  cin>>num;

  if(num>2)
  {
    for(int i=2; i<num; i++)
    {
      if(num%i==0)
      {
       prime=false;
      }
    }
      if(prime)
  {
    cout<<"The number is prime."<<endl;
  }
  else
  {
    cout<<"The number is composite."<<endl;
  }
  }
   else if (num==2)
  {
    cout<<"The number is prime."<<endl;
  }
  else
  {
    cout<<"Invalid Input. Please follow directions. OwO"<<endl;
  }
}
