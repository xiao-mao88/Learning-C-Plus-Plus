#include <iostream>
using namespace std;

int main() {
  bool elig= false;
  int age, ans;
  
  cout<<"Enter the year you were born: ";
  cin>>ans;
  age=2020-ans;
  cout<<endl;

  if(age>=35)
  {
    cout<<"Are you a natural born citizen? Answer 1 for no, 2 for yes."<<endl;
    cin>>ans;
    cout<<endl;
    if(ans==2)
    {
      cout<<"How many years have you been an US resident?"<<endl;;
      cin>>ans;
      cout<<endl;
      if(ans>=14)
      {
        cout<<"How many terms of presidency have you served?"<<endl;
        cin>>ans;
        cout<<endl;
        if(ans<2)
        {
          elig=true;
            cout<<"Congratulations! You are an eligable candidate for president!"<<endl;
        }
      }
    }
  }
if(!elig)
{
  cout<<"We regret to inform you that you are not an eligable candidate for presidency. Thank you for your cooperation.";
}  

}