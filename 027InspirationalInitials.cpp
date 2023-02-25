#include <iostream>
using namespace std;

int main() {
  char firstinitial, lastinitial;
  cout<<"Please insert your first initial (capital): "<<endl;
  cin>>firstinitial;
  cout<<"Please insert your last initial (capital): "<<endl;
  cin>>lastinitial;

  switch(firstinitial)
  {
    case 'A': 
    cout<<"Awesome ";
    break;

    case 'B':
    cout<<"Beautiful ";
    break;

    case 'C':
    cout<<"Caring ";
    break;

    case 'D':
    cout<<"Daring ";
    break;

    case 'E':
    cout<<"Erratic ";
    break;

    case 'F':
    cout<<"Fanatic ";
    break;

    case 'G':
    cout<<"Gucci ";
    break;

    case 'H':
    cout<<"Humorous ";
    break;

    case 'I':
    cout<<"Intelligent ";
    break;

    case 'J':
    cout<<"Jazzy ";
    break;

    case 'K':
    cout<<"Kind ";
    break;

    case 'L':
    cout<<"Lucky ";
    break;

    case 'M':
    cout<<"Moody ";
    break;

    case 'N':
    cout<<"Narcassistic ";
    break;

    case 'O':
    cout<<"Outstanding ";
    break;

    case 'P':
    cout<<"Pretty ";
    break;

    case 'Q':
    cout<<"Questioning ";
    break;

    case 'R':
    cout<<"Rad ";
    break;

    case 'S':
    cout<<"Super ";
    break;

    case 'T':
    cout<<"Talented ";
    break;

    case 'U':
    cout<<"Unselfish ";
    break;

    case 'V':
    cout<<"Vivacious ";
    break;

    case 'W':
    cout<<"Wealthy ";
    break;

    case 'X':
    cout<<"Xenophobic ";
    break;

    case 'Y':
    cout<<"Youthful ";
    break;

    case 'Z':
    cout<<"Zany ";
    break;

    default:
    cout<<"You have chosen an invalid first initial. Please try again."<<endl;
  }

  switch(lastinitial)
  {
    case 'A': 
    cout<<"Admirable ";
    break;

    case 'B':
    cout<<"Brilliant ";
    break;

    case 'C':
    cout<<"Candid ";
    break;

    case 'D':
    cout<<"Devoted ";
    break;

    case 'E':
    cout<<"Extravagant ";
    break;

    case 'F':
    cout<<"Fancy ";
    break;

    case 'G':
    cout<<"Great ";
    break;

    case 'H':
    cout<<"Heavenly ";
    break;

    case 'I':
    cout<<"Interesting ";
    break;

    case 'J':
    cout<<"Joyful ";
    break;

    case 'K':
    cout<<"Kingly ";
    break;

    case 'L':
    cout<<"Lively ";
    break;

    case 'M':
    cout<<"Mighty ";
    break;

    case 'N':
    cout<<"Noble ";
    break;

    case 'O':
    cout<<"Optimist ";
    break;

    case 'P':
    cout<<"Pugnacious ";
    break;

    case 'Q':
    cout<<"Quiet ";
    break;

    case 'R':
    cout<<"Rambunctious ";
    break;

    case 'S':
    cout<<"Superior ";
    break;

    case 'T':
    cout<<"Tenacious ";
    break;

    case 'U':
    cout<<"Understanding ";
    break;

    case 'V':
    cout<<"Valiant ";
    break;

    case 'W':
    cout<<"Wild ";
    break;

    case 'X':
    cout<<"Xenial ";
    break;

    case 'Y':
    cout<<"Yellow-bellied ";
    break;

    case 'Z':
    cout<<"Zealous ";
    break;

    default:
    cout<<"You have chosen an invalid last initial. Please try again."<<endl;
  }
}