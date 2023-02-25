#include <iostream>
using namespace std;
#include <cmath>

int main() {
  double a,b,c,disc;
  cout<<"Enter Value of a: ";
  cin>>a;
  cout<<endl;

  cout<<"Enter Value of b: ";
  cin>>b;
  cout<<endl;

  cout<<"Enter Value of c: ";
  cin>>c;
  cout<<endl;

  disc=pow(b,2)-4*a*c;
  if(disc==0)
  {
    cout<<"There is 1 real root";
  }
  else if(disc>0)
  {
    cout<<"There are 2 real roots";
  }
  else
  {
    cout<<"There are no real roots";
  }
}