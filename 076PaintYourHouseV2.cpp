#include <iostream>
using namespace std;

double RoomArea(double l, double w, double h, int d, int win)
{
  double doorArea = 20.25, winArea = 12;
  return (l*h+w*h)*2-(d*doorArea+win*winArea);
}
double CielingArea(double l, double w)
{
  return l*w;
}

int main() {
  int rooms, doors, windows;
  double width, length, height;
  cout<<"Number of rooms: ";
  cin>>rooms;
  double ceilArea[rooms], wallArea[rooms];
  for (int i=1; i<=rooms; i++)
  {
    cout<<"Room "<<i<<endl<<endl;
    cout<<"Width of Room: ";
    cin>>width;
    cout<<"Length of Room: ";
    cin>>length;
    cout<<"Height of Room: ";
    cin>>height;
    cout<<endl<<"Number of Doors: ";
    cin>>doors;
    cout<<endl<<"Number of Windows: ";
    cin>>windows;
    wallArea[i]= RoomArea(length, width, height, doors, windows);
    cout<<wallArea[i]<<endl;
    ceilArea[i]= CielingArea(width, length);
  }
  for (int i=1; i<=rooms; i++)
  {
    cout<<"Room Area for Room "<<i<<": "<<wallArea[i]<<endl;
    cout<<"Ceiling Area for Room "<<i<<": "<<ceilArea[i]<<endl<<endl;
  }
}