#include <iostream>
using namespace std;
#include <iomanip>
int main() {
  string item1="Soy milk", item2="Long Bao", item3="Youtiao", item4="Sweet Tofu", item5="Congee";
  double price1=3.81, price2=4.52, price3=2.21, price4=1.50, price5=3.21, Subtotal=price1+price2+price3+price4+price5, Total=Subtotal;
  cout << fixed << setprecision(2);
  cout << left << setw(12) << setfill('.') << item1 << price1<<endl;
  cout << left << setw(12) << setfill('.') << item2 << price2<<endl;
  cout << left << setw(12) << setfill('.') << item3 << price3<<endl;
  cout << left << setw(12) << setfill('.') << item4 << price4<<endl;
  cout << left << setw(12) << setfill('.') << item5 << price5<<endl;
  cout << setw(16) << setfill('_') << "_" << endl;
  cout << left << setw(12) << setfill('.') << "Subtotal" << Subtotal << endl;
  cout << left << setw(12) << setfill('.') << "Total" << Total << endl;

}