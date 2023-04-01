#include <iostream>
using namespace std;

int main() {
  int size=40;
  bool barcode[size];
  for(int i=0;i<10;i++)
  {
    for (int j=0;j<size;j++)
    {
      bool barcode[size];
      if (barcode[j]%2==0)
      {
        barcode[j]=true;
      }
      else
      {
        barcode[j]=false;
      }
      if (barcode[j]==true)
      {
        cout<<"|";
      }
      if (barcode[j]==false)
      {
        cout<<" ";
      }
    }
    cout<<endl;
  }
}