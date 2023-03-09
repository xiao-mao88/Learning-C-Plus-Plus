#include <iostream>
using namespace std;

int main() {
  int choice,key=1;
  string text;
  cout<<"This program will decipher a message encoded using the Caesar Cipher."<<endl<<"Message: "<<endl;
  getline (cin, text);
  do
  {
     for (int i=0; i<text.length();i++)
    {
        if (text.at(i)>=97 && text.at(i)<=122)
        {
          text.at(i)-=32;
        }
        if(text.at(i)>=65&&text.at(i)<=90)
        text.at(i)+=key;
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
    cout<<text<<endl;
    cout<<"Was this your message?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
    cin>>choice;

  }while(choice==2);
}