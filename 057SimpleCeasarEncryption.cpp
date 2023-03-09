#include <iostream>
using namespace std;

void CaesarShift(string text, int Key)
{
    for (int i=0; i<text.length();i++)
  {
        if (text.at(i)>=97 && text.at(i)<=122)
      {
        text.at(i)-=32;
      }
    if(text.at(i)>=65&&text.at(i)<=90)
        text.at(i)+=Key;
    {
      if (text.at(i)<65)
      {
        text.at(i)+=26;
      }
       else if(text.at(i)>90)
      {
      text.at(i)-=26;
      }
    }
  }
  cout << text; 
}


int main() {
  string text;
  int Key;
  cout<<"This will use the process of Caesar Shifting to encode your message. Enter Message: "<<endl;
  getline (cin, text);
  cout<<"\n Key: ";
  cin>>Key;
  if(Key>0)
      {
        Key%=26;
      }
  else if(Key<0)
  {
    Key*=(-1);
    Key%=26;
    Key*=(-1);
  }
  CaesarShift(text, Key);
}