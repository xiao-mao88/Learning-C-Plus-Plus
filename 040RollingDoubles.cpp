#include <iostream>
using namespace std;
#include <cstdlib>

int main() {
  int diea, dieb, numroll, numdoubles=0;
  cout << "How many times would you like to roll the die: ";
  cin>>numroll;
  srand(time(NULL));
  
  cout<<endl<<"Your values are:"<<endl;
  if(numroll>=0)
  {
    for(int i = 1; i <= numroll; i++)
    {
      diea=rand()%6+1;
      dieb=rand()%6+1;
      cout<<"Roll Number "<<i<<": "<<diea<<"&"<<dieb;
      
      if(diea==dieb)
      {
        cout<<" Doubles";
        numdoubles++;
      } 
        cout << endl; 
  }
  cout<<"You rolled "<<numdoubles<<" double(s)"<<endl;
  }
  else
  {
    cout<<"INVALID INPUT! ^OwO^"<<endl;
  }
}