#include <iostream>
using namespace std;

int main() {

  double feet=5, inches=1, total_inches=feet*12+inches, cm= total_inches*2.54, meters=cm/100;
  cout <<feet<<"' "<<inches<<"\"= "<<meters<<" meters";
}