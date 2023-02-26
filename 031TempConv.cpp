#include <iostream>
using namespace std;

int main() {
  double temp1, temp2;
  int choice;

  //temp1
  cout << "What is the current temperature?"<<endl;
  cin >> temp1;
  //choice
  cout << "How would you like to convert this temperature?"<<endl;
  cout << "1. Farenheit to Celsius"<<endl;
  cout << "2. Celsius to Farenheit"<<endl;
  cout << "3. Farenheit to Kelvin"<<endl;
  cout << "4. Kelvin to Farenheit"<<endl;
  cout << "5. Celsius to Kelvin"<<endl;
  cout << "6. Kelvin to Celsius"<<endl;
  cin>>choice;
  //switch statements
  switch(choice)
  {
    case 1:
    temp2= (temp1-32)*5/9;
    cout << "Your converted temperature is " << temp2 << " Degrees Celsius." << endl;
    break;

    case 2:
    temp2= (temp1*9/5)+32;
    cout << "Your converted temperature is " << temp2 << " Degrees Farenheit." << endl;
    break;

    case 3:
    temp2= (temp1-32)*5/9+273.15;
    cout << "Your converted temperature is " << temp2 << " Degrees Kelvin." << endl;
    break;

    case 4:
    temp2= (temp1-273.15)*9/5+32;
    cout << "Your converted temperature is " << temp2 << " Degrees Farenheit." << endl;
    break;

    case 5:
    temp2= temp1+273.15;
    cout << "Your converted temperature is " << temp2 << " Degrees Kelvin." << endl;
    break;

    case 6:
    temp2= temp1-273.15;
    cout << "Your converted temperature is " << temp2 << " Degrees Celsius." << endl;
    break;

    default:
    cout<<"You have chosen an invalid option. Please try again";
  }
}