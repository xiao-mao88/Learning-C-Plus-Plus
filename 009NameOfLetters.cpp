#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  cout << left<< setfill(' ') << setw(5)<<"L";
  cout << right<< setfill(' ') << setw(5)<<"\nL";
  cout << left<< setfill(' ') << setw(5)<<"\nL";
  cout << setfill(' ') << setw(5)<<"\nL";
  cout << setfill(' ') << setw(5)<<"\nL";
  cout << setfill('L') << setw(10)<<"\n";

  cout << left<< setfill(' ') << setw(5)<<"\n\nL";
  cout << right<< setfill(' ') << setw(5)<<"\nL";
  cout << left<< setfill(' ') << setw(5)<<"\nL";
  cout << setfill(' ') << setw(5)<<"\nL";
  cout << setfill(' ') << setw(5)<<"\nL";
  cout << setfill('L') << setw(10)<<"\n";
}