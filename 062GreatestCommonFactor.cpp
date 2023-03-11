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

int main() {
  int num1, num2;
  cout << "This program fins the greatest common factor between two numbers."<<endl<<"Number 1: ";
  cin>>num1;
  cout<<"Number 2: ";
  cin>>num2;
  int gcf=GCF(num1, num2);
  cout<<"Greatest Common Factor: "<<gcf;
}