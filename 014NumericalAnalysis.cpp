#include <iostream>
using namespace std;
#include <cmath>

int main() {

  int num;
  cout<<"Enter an integer: ";
  cin>>num;
  if(num>0){
    cout<<num<<" is positive"<<endl;
    }
  if(num%2==0){
    cout<<num<<" is even"<<endl;
    }
  if(num%3==0){
    cout<<num<<" is divisible by 3";
    }
}