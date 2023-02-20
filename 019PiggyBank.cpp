#include <iostream>
using namespace std;
int main() {
  double penny, nickel, dime, quarter, halfdollar, dollar, item_cost, ownedmoney;
  
  cout<<"How much does your item cost? ";
  cin>>item_cost;
  cout<<endl;

  cout<<"How many pennies do you have? ";
  cin>>penny;
  cout<<endl;

  cout<<"How many nickels do you have? ";
  cin>>nickel;
  cout<<endl;

  cout<<"How many dimes do you have? ";
  cin>>dime;
  cout<<endl;

  cout<<"How many quarters do you have? ";
  cin>>quarter;
  cout<<endl;

  cout<<"How many half-dollars do you have? ";
  cin>>halfdollar;
  cout<<endl;

  cout<<"How many dollar coins do you have? ";
  cin>>dollar;
  cout<<endl;

  ownedmoney=penny*0.01+nickel*0.05+dime*0.1+quarter*0.25+halfdollar*0.5+dollar;

  if(item_cost<=ownedmoney)
  {
    cout<<"You can buy the item that you want!";
  }
  else 
  {
    cout<<"You cannot buy the item that you want....";
  }
}