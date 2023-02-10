#include <iostream>
#include  <cmath> 
using namespace std; 

int main() {

  cout<<"Heron's Formula\n----------------\n";

  double A=3, B=5, C=6, S=8;
  double AREA=sqrt(S*(S-A)*(S-B)*(S-C));
  cout<<"A: " << A << "\nB: " << B << "\nC: " << C << endl;
  cout<< "Area: " << AREA;
  
}