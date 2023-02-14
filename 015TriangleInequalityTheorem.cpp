#include <iostream>
using namespace std;
int main() {
double a,b,c;
bool triangle=true;

cout<<"Enter Triangle Side 1: ";
cin>>a;
cout<<endl;

cout<<"Enter Triangle Side 2: ";
cin>>b;
cout<<endl;

cout<<"Enter Triangle Side 3: ";
cin>>c;
cout<<endl;

if(a + c <= b)
{
  triangle=false;
  cout<<"These Sides Cannot Form a Triangle";
}

if(a + b <= c)
{
  triangle=false;
  cout<<"These Sides Cannot Form a Triangle";
}

if(b + c <= a)
{
  triangle=false;
  cout<<"These Sides Cannot Form a Triangle";
}

if(triangle)
{
  cout<<"These Sides Can Form a Triangle";
}
}