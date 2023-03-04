#include <iostream>
using namespace std;
#include <cmath>
int main() {
  int num, base=1, num2, x, perfectsq=1;
  cout<<"This program simplifies radicals. \nWhat is your radicand: "<<endl;
  cin>>num;
  if(num<0)
  {
    num2=sqrt(-num);    
  }
  else
  {
    num2=sqrt(num);
  }
    for(int i=num2+1; i>1; i--)
    {
      base=i;
      //cout<<base<<endl;
      x=pow(base,2);
      if(num%x==0&&base!=1)
      {
        perfectsq=base;
        break;
      }
    }
  cout<<"√"<<num<<"= ";
  
  if(perfectsq!=1)
  {
    cout<<perfectsq;
  }
  if(abs(num)/pow(perfectsq,2)!=1)
  {
    cout<<"√"<<abs(num)/pow(perfectsq,2);
  }
  if(num==1)
  {
    cout<<1;
  }
  if(num<0)
  {
    cout<<"i";
  }
}