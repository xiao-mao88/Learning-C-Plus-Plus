#include <iostream>
using namespace std;
void song(string part, string action)
{
  cout<<"The "<<part<<" on the bus go "<<action<<" "<<action<<" "<<action<<" "<<endl;
  cout<<action<<" "<<action<<" "<<action<<endl;
  cout<<action<<" "<<action<<" "<<action<<endl;
  cout<<"The "<<part<<" on the bus go "<<action<<" all through the town"<<endl<<endl;

}

int main() {
  string part, action;

  part="Wheels";
  action="Round";
  song(part,action);
  
  part="Lights";
  action="Blink";
  song(part, action);

  part="Coins";
  action="Clink";
  song(part, action);

  part="Wheels";
  action="Round";
  song(part, action);
}