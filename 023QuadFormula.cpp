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
  if(disc<0)
  {
    cout<<"The roots are: \nx1=(-"<<b<<"+"<<sqrt(-disc)<<"i)/"<<(2*a);
    cout<<"\nOR\n";
    cout<<"x2=(-"<<b<<"-"<<sqrt(-disc)<<"i)/"<<(2*a);
  }
  else if(disc>0)
  {
    cout<<"The roots are: \nx1= "<<(-b+sqrt(disc))/(2*a);
    cout<<"\nAND\n";
    cout<<"x2= "<<(-b-sqrt(disc))/(2*a);

  }
  else
  {
    cout<<"The root is: \nx="<<(-b)/(2*a);
  }
}