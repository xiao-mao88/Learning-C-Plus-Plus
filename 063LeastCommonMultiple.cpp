#include <iostream>
using namespace std;
int GCF(int num1, int num2)
{
  int gcf=1;
  for(int i=2; i<=num1; i++)
  {
    if(num1%i==0 && num2%i==0)
    {
      gcf=i;
    }
  }
  return gcf;
}
int LCM(int num1, int num2)
{
  int gcf, lcm=1;
  gcf= GCF(num1,num2);
  lcm=(num1*num2)/gcf;

  return lcm;
}

int main() {
  int lcm, gcf, num1, num2;
  cout << "This program will find the least common multiple for two numbers."<<endl;
  cout<<"Number 1: ";
  cin>>num1;
  cout<<"Number 2: ";
  cin>>num2;
  gcf=GCF(num1, num2);
  lcm=LCM(num1, num2);
  cout<<"Greatest Common Factor: "<<gcf<<endl;
  cout<<"Least Common Multiple: "<<lcm<<endl;
}