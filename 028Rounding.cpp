#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

int main() {
  double num;
  int whole, place, digit;
  setprecision(15);
  cout<<"Please insert a number: ";
  cin>>num;
  cout<<"How many decimals places should the number be rounded to? ";
  cin>>place;
  whole=num*(pow(10,place+1));
  digit=whole%10;
  switch(digit)
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    whole=whole/10;
    num=whole/pow(10,place);
    cout<<"\nThe rounded number is: "<<num<<endl;
    break;

    case 5:
    case 6:
    case 7:
    case 9:
    whole=(whole/10)+1;
    num=whole/pow(10,place);
    cout<<"\nThe rounded number is: "<<num<<endl;
  }
}