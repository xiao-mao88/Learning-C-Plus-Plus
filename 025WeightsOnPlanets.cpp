#include <iostream>
using namespace std;

int main() {
  double weight, weight2;
  int planet;
  cout<<"What is your weight in pounds?"<<endl;
  cin>>weight;
  cout<<"Which planet would you like to travel to in our solar system?"<<endl;
  cout<<"1. Mercury"<<endl;
  cout<<"2. Venus"<<endl;
  cout<<"3. Earth"<<endl;
  cout<<"4. Mars"<<endl;
  cout<<"5. Jupiter"<<endl;
  cout<<"6. Saturn"<<endl;
  cout<<"7. Uranus"<<endl;
  cout<<"8. Neptune"<<endl;
  cout<<"9. Pluto"<<endl;
  cin>>planet;
  
  switch(planet)
  {
    case 1:
    weight2=weight*0.38;
    cout<<"Your weight on Mercury is "<<weight2<<" pounds";
    break;

    case 2:
    weight2=weight*0.91;
    cout<<"Your weight on Venus is "<<weight2<<" pounds";
    break;

    case 3:
    weight2=weight*1.00;
    cout<<"Your weight on Earth is "<<weight2<<" pounds";
    break;

    case 4:
    weight2=weight*0.38;
    cout<<"Your weight on Mars is "<<weight2<<" pounds";
    break;

    case 5:
    weight2=weight*2.34;
    cout<<"Your weight on Jupiter is "<<weight2<<" pounds";
    break;

    case 6:
    weight2=weight*1.06;
    cout<<"Your weight on Saturn is "<<weight2<<" pounds";
    break;

    case 7:
    weight2=weight*0.92;
    cout<<"Your weight on Uranus is "<<weight2<<" pounds";
    break;

    case 8:
    weight2=weight*1.19;
    cout<<"Your weight on Neptune is "<<weight2<<" pounds";
    break;

    case 9:
    weight2=weight*0.06;
    cout<<"Your weight on Pluto is "<<weight2<<" pounds";
    break;

    default: 
    cout<<"You have chosen a non-existing planet within our solar system. Please restart the program and try again";
  }
}