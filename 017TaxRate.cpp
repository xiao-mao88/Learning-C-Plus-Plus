#include <iostream>
using namespace std;

int main() {

  int yearly;
  double tax_amount, tax_rate;
  
  //prompt Salary
  cout<<"Please insert your salary: $";
  cin>>yearly;
  cout<<endl;

  //prompt if-then statements
  if (yearly>=0&&yearly<=9700)
  {
    tax_rate=0.10;
  }

  if(yearly>=9701&&yearly<=39475)
  {
    tax_rate=0.12;
  }

  if(yearly>=39476&&yearly<=84200)
  {
    tax_rate=0.22;
  }

  if(yearly>=84201&&yearly<=160725)
  {
    tax_rate=0.24;
  }

  if(yearly>=160726&&yearly<=204100)
  {
    tax_rate=0.32;
  }

  if(yearly>=204101&&yearly<=510000)
  {
    tax_rate=0.35;
  }

  if(yearly>510000)
  {
    tax_rate=0.37;
  }

  //prompt print outs
  tax_amount=tax_rate*yearly;
  cout<<"This is your yearly tax: $"<<tax_amount;
}