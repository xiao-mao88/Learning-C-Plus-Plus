#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
  int dice, roll, one=0, two=0, three=0, four=0, five=0, six=0;
  cout << "How many times would you like to roll the die: ";
  cin>>dice;
  srand(time(NULL));
  
  cout<<endl<<"Your values are:"<<endl;
  for(int i=1; i<=dice; i++)
  {
    roll=rand()%6+1;
    cout<<roll<<endl;

    switch(roll)
  {
    case 1:
    one++;
    break;

    case 2:
    two++;
    break;

    case 3:
    three++;
    break;

    case 4:
    four++;
    break;

    case 5:
    five++;
    break;

    case 6:
    six++;
    break;
  }
  }
  cout<<"You have rolled "<<one<<" one(s)."<<endl;
  cout<<"You have rolled "<<two<<" two(s)."<<endl;
  cout<<"You have rolled "<<three<<" three(s)."<<endl;
  cout<<"You have rolled "<<four<<" four(s)."<<endl;
  cout<<"You have rolled "<<five<<" five(s)."<<endl;
  cout<<"You have rolled "<<six<<" six(es)."<<endl;
}