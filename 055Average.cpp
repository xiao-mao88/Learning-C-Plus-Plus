#include <iostream>
using namespace std;

int main() { 
  double average, sum=0, times=0, numbers;
  cout<<"Please input the numbers of your data set. Once you are done, input -1. "<<endl;
  do
  {
    cin>>numbers;
    if(numbers!=-1)
    {
      sum=sum+numbers;
      times++;
    }
    cout<<endl;
  }while(numbers!=-1);
  average=sum/times;
  cout<<"Your average is "<<average;
}