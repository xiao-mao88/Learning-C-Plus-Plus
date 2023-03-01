#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num, n;
  cout << "Enter a positive integer: ";
  cin>>num;

  if(num>0)
  {
    for(int i=1; i<=num;i++)
    {
      if(num%i==0)
      cout<<i<<",";
    }
    cout<<"\b";
  }
  else
  {
    cout<<"Invalid INPUT PLEASE TRY AGAIN! <OwO>";
  }
}