#include <iostream>
using namespace std;

void LowertoUpper(string words)
{
   for (int i=0; i<words.length();i++)
  {
    if (words.at(i)>=97 && words.at(i)<=122)
    {
      words.at(i)-=32;
    }
  }
	cout<<words;
}

int main() 
{
  string words;
  cout<<"Please type some words and your words will be converted to all CAPS"<<endl;
  getline (cin, words);
  LowertoUpper(words);
}