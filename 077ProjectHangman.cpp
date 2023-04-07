#include <iostream>
#include <cstdlib>
using namespace std;

string used[]={" "," "," "," "," "," "," "," "," "," "," "," "," "};


void draw(int x)
{
	switch(x)
	{
		case 0:
			cout << endl;
			break;
		case 1:
			cout << endl << endl << "_ _ _ _ _ _ _ _ _ _ _ _ ";
			break;
		case 2:
			cout << "  " << endl;//1
			cout << "              |" << endl;//2
			cout << "              |" << endl;//3
			cout << "              |" << endl;//4
			cout << "              |" << endl;//5
			cout << "              |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			break;
		case 3:
			cout << "  _ _ _ _ _ _ _" << endl;//1
			cout << "              |" << endl;//2
			cout << "              |" << endl;//3
			cout << "              |" << endl;//4
			cout << "              |" << endl;//5
			cout << "              |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			break;
		case 4:
			cout << "  _ _ _ _ _ _ _" << endl;//1
			cout << "  |           |" << endl;//2
			cout << "  |           |" << endl;//3
			cout << "              |" << endl;//4
			cout << "              |" << endl;//5
			cout << "              |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			break;
		case 5:
			cout << "  _ _ _ _ _ _ _" << endl;//1
			cout << "  |           |" << endl;//2
			cout << "  |           |" << endl;//3
			cout << "  O           |" << endl;//4
			cout << "              |" << endl;//5
			cout << "              |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			break;
		case 6:
			cout << "  _ _ _ _ _ _ _" << endl;//1
			cout << "  |           |" << endl;//2
			cout << "  |           |" << endl;//3
			cout << "  O           |" << endl;//4
			cout << "  |           |" << endl;//5
			cout << "              |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			break;
	case 7:
			cout << "  _ _ _ _ _ _ _" << endl;//1
			cout << "  |           |" << endl;//2
			cout << "  |           |" << endl;//3
			cout << "  O           |" << endl;//4
			cout << " \\|           |" << endl;//5
			cout << "              |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			break;
		case 8:
			cout << "  _ _ _ _ _ _ _" << endl;//1
			cout << "  |           |" << endl;//2
			cout << "  |           |" << endl;//3
			cout << "  O           |" << endl;//4
			cout << " \\|/          |" << endl;//5
			cout << "              |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			break;
		case 9:
			cout << "  _ _ _ _ _ _ _" << endl;//1
			cout << "  |           |" << endl;//2
			cout << "  |           |" << endl;//3
			cout << "  O           |" << endl;//4
			cout << " \\|/          |" << endl;//5
			cout << " /            |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			break;
		case 10:
			cout << "  _ _ _ _ _ _ _" << endl;//1
			cout << "  |           |" << endl;//2
			cout << "  |           |" << endl;//3
			cout << "  O           |" << endl;//4
			cout << " \\|/          |" << endl;//5
			cout << " / \\          |" << endl;//6
			cout << "              |" << endl;//7
			cout << "              |" << endl;//8
			cout << "- - - - - - - | - - - -" << endl; //9
			cout << "GAME OVER!\n";
			break;
	}
}

bool inused(string s)
{
  for (int i=0; i<13; i++)
  {
    if(s==used[i])
    {
      return true;
    }
  }
  return false;
}


string getword(int x)
{
  string word;
  string words[]= {"owo","uwu","anime","senpai","chan","sensei","chibi","hewwo","expo","crunchyroll","ryu","tsukki","shiro"};
  do
  {
    word= words[rand()%10];
  }while(inused(word));
  used[x]=word;
  return word; 
}

int main() {
  srand(time(NULL));
  int replay=1;
  int numgames=0;

  do{
    int choice, len;
    string word=getword(numgames);
    len=word.length();
    char answer[len];
    char blanks[len];
    char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int rguesses=10;
    string guess;
    bool gameon=true;
    bool inword;
    bool win;

    for (int i=0; i<len; i++)
    {
      answer[i]=word.at(i);
      blanks[i]='_';
    }

    do
    {
      win=true;
      inword=false;
      draw(10-rguesses);
      cout<<endl;
      for(int i=0; i<len; i++)
      {
        cout<<blanks[i]<<" ";
      }
      cout<<endl;
      for(int i=0; i<26; i++)
      {
        cout<<alpha[i]<<" ";
        if (i==12)
        {
          cout<<endl;
        }
      }
      cout<<endl<<"Enter a guess: ";
      getline (cin,guess);

      if(guess.length()==1)
      {
        for(int i=0; i<26; i++)
        {
          if(alpha[i]==guess.at(0))
          {
            alpha[i]=' ';
          }
        }
        for(int i=0; i<len; i++)
        {
          if(answer[i]==guess.at(0))
          {
            blanks[i]=guess.at(0);
            inword=true;
          }
        }
        if(!inword)
        {
          rguesses--;
        }
        for(int i=0; i<len; i++)
        {
          if (answer[i] != blanks[i])
          {
            win = false;
          }
        }
      }
      else
      {
        if(word==guess)
        {
          break;
        }
        else
        {
          win=false;
          draw(10);
          break;
        }
      }
      if(win)
      {
        gameon=false;
      }
      if (rguesses==0)
      {
        gameon=false;
        draw(10);
      }

    }while(gameon);
    if (win==true)
    {
      cout<<"Yay! You have won! The word was: "<<word<<endl;
    }
    else
    {
      cout<<"You have lost. The correct answer was: "<<word<<endl;
    }
    cout<<"Would you like to play again?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl<<endl;
    cin>>replay;
    getline (cin, guess);
    numgames++;
  }while(replay==1);
}