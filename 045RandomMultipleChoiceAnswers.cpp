#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
  int mcq, choices, num;
  cout << "How many multiple choice questions (1-10): ";
  cin>>mcq;
  cout<<"How many choices would you like (1-5): ";
  cin>>choices;
  srand(time(NULL));
  choices=rand()%mcq+1;
  
  if (mcq>=1 && mcq<=10)
  {
    for(int i=1; i<=mcq; i++)
    {
      cout<<i<<".";
      num=rand()%choices +1; 
    switch (num)
    {
      case 1:
      cout<<"A"<<endl;
      break;

      case 2:
      cout<<"B"<<endl;
      break;

      case 3:
      cout<<"C"<<endl;
      break;

      case 4:
      cout<<"D"<<endl;
      break;

      case 5:
      cout<<"E"<<endl;
      break;
      }
    }
  }
  else
  {
    cout<<"INVALID!!!!";
  }
}