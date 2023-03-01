#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num;
  cout << "Please insert a positive number: ";
  cin>>num;
  int r=0;
  if(num>0)
  {
    for(int i=num; i>0; i--)
    {
      r+=i;
    }
    cout<<"Sum: "<<r<<endl;
  }
  else 
  {
    cout<<"Invalid option.";
  }
}