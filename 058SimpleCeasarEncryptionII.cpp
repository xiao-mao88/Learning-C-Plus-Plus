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
    {
          text.at(i)+=Key;
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
  cout<<"This program uses Caesar shifting to encrypt your message. Message: "<<endl;
  getline (cin, text);
  Key=text.length()%25+1;
  if(text.length()%2!=0)
  {
    Key*=-1;
  }
  CaesarShift(text, Key);
}