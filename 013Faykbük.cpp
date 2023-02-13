#include <iostream>
using namespace std;
#include <iomanip>

int main() {
  
  //prompt variables
  string Firstname, Lastname;
  double year, month, day;

  //prompt Name 
  cout<<"First Name: ";
  getline(cin,Firstname);
  cout<<"Last Name: ";
  getline(cin,Lastname);

  //prompt Birthdate
  cout<<"Birthday- ";
  cout<<"\nMonth: ";
  cin>> month;
  cout<<"Day: ";
  cin>> day;
  cout<<"Year: ";
  cin>> year;

  string FavFood, FavBook, FavMovie, FavSong;
  //prompt Favorites
  cout<<"Favorite Food: ";
  cin.ignore(1,'n');
  getline(cin,FavFood);
  cout<<"Favorite Book: ";
  getline(cin,FavBook);
  cout<<"Favorite Movie: ";
  getline(cin,FavMovie);
  cout<<"Favorite Song: ";
  getline(cin,FavSong);

  //prompt Printout
  cout<<"\n\n\nCongragulations on joining our Faykbük community "<<Firstname<<" "<<Lastname<< "!\n\nName:"<< Firstname<<" "<< Lastname<< endl;
  cout<<"Date of Birth: "<< month<<"/"<< day<<"/"<< year<< endl;
  cout<<"Favorite Food: "<<FavFood<< endl;
  cout<<"Favorite Book: "<<FavBook<<endl;
  cout<<"Favorite Movie: "<<FavMovie<<endl;
  cout<<"Favorite Song: "<<FavSong<<endl;
}