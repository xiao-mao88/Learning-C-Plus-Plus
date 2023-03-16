#include <iostream>
using namespace std;
#include <cmath>
void leg()
{
  double a,c,b;
  cout<<"Length of leg a: ";
  cin>>a;
  cout<<"Length of hypotnuse: ";
  cin>>c;
  b=sqrt(pow(c,2)-pow(a,2));
  cout<<"Length of leg b: "<<b;
}

void hypotnuse()
{
  double a,b,c;
  cout<<"Length of leg a: ";
  cin>>a;
  cout<<"Length of leg b: ";
  cin>>b;
  c=sqrt(pow(a,2)+pow(b,2));
  cout<<"Length of hypotnuse: "<<c;
}

int main() {
  int choice;
  cout << "This is a pythagorean theorem calculator."<<endl<<endl<<"1. Solve for a leg."<<endl<<"2. Solve for the hypotnuse"<<endl;
  cin>>choice;
  if (choice==1)
  {
    leg();
  }
  else if (choice==2)
  {
    hypotnuse();
  }
  else
  {
    cout<<"Why u no follow directions. OwO";
  }
}