#include <iostream>
using namespace std;
int main() {
  int num, factor=2;
  cout<<"Input number greater than 0: ";
  cin>>num;
  while(num>1)
  {
    if(num%factor==0)
  {
    cout<<factor;
    num/=factor;
    if(num!=1)
    {
      cout<<"*";
    }
  }
    else
  {
    factor++;
  }
  }
}