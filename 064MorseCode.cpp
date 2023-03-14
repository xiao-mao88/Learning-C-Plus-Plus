#include <iostream>
using namespace std;
string LowertoUpper(string text)
{
   for (int i=0; i<text.length();i++)
  {
    if (text.at(i)>=97 && text.at(i)<=122)
    {
      text.at(i)-=32;
    }
  }
  return text;
}

string toMorse(string text)
{
  LowertoUpper(text);
  string dot, dash, morse;
  dot= ". ";
  dash= "__ ";
  morse= "";
  
  for (int i=0; i<text.length(); i++)
  {
    switch (text.at(i))
  {
    //alphabet
    case 'A':
    morse += (dot + dash + " ");
    break;

    case 'B':
    morse += (dash + dot + dot + dot + " ");
    break;

    case 'C':
    morse += (dash + dot + dash + dot + " ");
    break;

    case 'D':
    morse += (dash + dot + dot + " ");
    break;

    case 'E':
    morse += (dot + " ");
    break;

    case 'F':
    morse += (dot + dot + dash + dot + " ");
    break;

    case 'G':
    morse += (dash + dash + dot + " ");
    break;

    case 'H':
    morse += (dot + dot + dot + dot + " ");
    break;

    case 'I':
    morse += (dot + dot + " ");
    break;

    case 'J':
    morse += (dot + dash + dash + dash + " ");
    break;

    case 'K':
    morse += (dash + dot + dash + " ");
    break;

    case 'L':
    morse += (dot + dash + dot + dot + " ");
    break;

    case 'M':
    morse += (dash + dash + " ");
    break;

    case 'N':
    morse += (dash + dot + " ");
    break;

    case 'O':
    morse += (dash + dash + dash + " ");
    break;

    case 'P':
    morse += (dot + dash + dash + dot + " ");
    break;

    case 'Q':
    morse += (dash + dash + dot + dash + " ");
    break;

    case 'R':
    morse += (dot + dash + dot + " ");
    break;

    case 'S':
    morse += (dot + dot + dot + " ");
    break;

    case 'T':
    morse += (dash + " ");
    break;

    case 'U':
    morse += (dot + dot + dash + " ");
    break;

    case 'V':
    morse += (dot + dot + dot + dash + " ");
    break;

    case 'W':
    morse += (dot + dash + dash + " ");
    break;

    case 'X':
    morse += (dash + dot + dot + dash + " ");
    break;

    case 'Y':
    morse += (dash + dot + dash + dash + " ");
    break;

    case 'Z':
    morse += (dash + dash + dot + dot + " ");
    break;

    //numbers
    case '1':
    morse += (dot + dash + dash + dash + dash + " ");
    break;

    case '2':
    morse += (dot + dot + dash + dash + dash + " ");
    break;

    case '3':
    morse += (dot + dot + dot + dash + dash + " ");
    break;

    case '4':
    morse += (dot + dot + dot + dot + dash + " ");
    break;

    case '5':
    morse += (dot + dot + dot + dot + dot + " ");
    break;

    case '6':
    morse += (dash + dot + dot + dot + dot + " ");
    break;

    case '7':
    morse += (dash + dash + dot + dot + dot + " ");
    break;

    case '8':
    morse += (dash + dash + dash + dot + dot + " ");
    break;

    case '9':
    morse += (dash + dash + dash + dash + dot + " ");
    break;

    case '0':
    morse += (dash + dash + dash + dash + dash + " ");
    break;

    //space
    case ' ':
    morse += ("    ");
    break;
  }
  }
  return morse;
}

int main() {
  string text;
  cout << "This code will change your message into morse code."<<endl<<"Message: ";
  getline (cin,text);
  text=LowertoUpper(text);
  text=toMorse(text);
  cout<<text;
}