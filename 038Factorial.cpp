#include <iostream>
#include<cmath>
using namespace std;

int main() {
  int num;
  long fact=1;
  cout << "Please insert an integer between 1-20: "<<endl;
  cin>>num;
  if(num>=1 && num<=20)
  {
    for(int i=num;i>=1;i--)
  {
    fact*=i;
  }
  cout << num<<"!="<<fact<<endl;
  }
  else
  {
    cout<<"Invalid option. OwO.";
  }
}