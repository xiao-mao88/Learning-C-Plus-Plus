#include <iostream>
using namespace std;
void reverse(string text)
{
  for (int i=text.length()-1; i>=0; i--) 
  {
    cout << text[i];
  }
}

int main() {
  string text;
  cout << "This program will take your message and print it out backwards (words included)."<<endl<<"Message: ";
  getline(cin,text);
  reverse(text);
}