#include <iostream>
using namespace std;
#include <iomanip>

int main() {
  double payRate, hours;
  string EmployeeName;
  
  //prompt Employee
  cout<< "Employee: ";
  getline(cin,EmployeeName);

  //prompt Pay Rate
  cout<< "Pay per Hour: $";
  cin>> payRate;

  //prompt Hours Worked
  cout<< "Hours Worked: ";
  cin>> hours;

  double Grosspay=hours*payRate;
  
  //prompt Gross Pay
  cout<< "Pay: $" << Grosspay<< endl<<endl;

  //print Pay Stub
  cout << setw(20) << setfill('_') << "_"<< endl;
  cout << left << setw(20-EmployeeName.length()) << setfill(' ') << "|Employee: " << EmployeeName<<"|"<<endl;
  cout << setw(20-to_string((int)payRate).length()) << setfill(' ') << "|Pay per Hour: " << payRate<<"|"<<endl;
  cout << setw(20-to_string((int)hours).length()) << setfill(' ') << "|Hours Worked: " << hours<<"|"<<endl;
  cout << setw(20-to_string((int)Grosspay).length()) << setfill(' ') << "|Pay: " << Grosspay<<"|"<<endl;
  cout << setw(20) << setfill('_') << "_";
}