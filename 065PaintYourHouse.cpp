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
  double width, length, height, roomArea, cielArea;
  cout << "Number of rooms to be painted: ";
  cin>>rooms;
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
    roomArea= RoomArea(length, width, height, doors, windows);
    cielArea= CielingArea(width, length);
    cout<<"Area of Walls That Needs to be Painted: "<<roomArea<<endl<<"Area of Cieling That Needs to be Painted: "<<cielArea<<endl;


  }
}