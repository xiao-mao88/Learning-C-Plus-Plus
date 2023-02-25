#include <iostream>
using namespace std;

int main() {
  int weather;
  cout<<"What is the weather?"<<endl;
  cout<<"1. Sunny"<<endl;
  cout<<"2. Windy"<<endl;
  cout<<"3. Rainy"<<endl;
  cout<<"4. Snowing"<<endl;
  cout<<"5. Cloudy"<<endl;
  cin>>weather;

  switch(weather)
  {
    case 1:
    cout<<"The weather is sunny! Wear short sleeves and pants and shoes of your choice and you are good to go!";
    break;

    case 2:
    cout<<"The weather is windy... Wear a long sleeved shirt and a light jacket on the outside. Also wear long pants and sneakers.";
    break;

    case 3:
    cout<<"The weather is rainy! Please wear long sleeves, a rain jecket and long pants. Also wear some rain boots. Don't forget to bring an umbrella!";
    break;

    case 4:
    cout<<"YAAAAAY!!! It's snowing! Remember to bundle up tightly, wear your thickest snowcoat and put on some snow boots.";
    break;

    case 5:
    cout<<"It is cloudy...................... Wear short sleeves with long pants and shoes of your choice. You might also want to bring an umbrella just in case.";
    break;

    default:
    cout<<"You have chosen in invalid option..... I guess choose your own clothes! OwO";
  }
}