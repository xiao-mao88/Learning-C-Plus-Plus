#include <iostream>
#include  <cmath> 
#include <iomanip>
using namespace std; 

int main() {

  cout<<"Heron's Formula\n----------------\n";

  //declaring variable(s)
  double A, B, C;
   
  //prompt side 1
  cout<<"Side #1: ";
  cin>>A;
  //prompt side 2
  cout<<"Side #2: ";
  cin>>B;
  //prompt side 3
  cout<<"Side #3: ";
  cin>>C;

  //prompt- calculate...

  double S=(A+B+C)/2;
  double AREA=sqrt(S*(S-A)*(S-B)*(S-C));

  //prompt result
  cout<<"Area: "<<AREA;
}