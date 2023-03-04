#include <iostream>
using namespace std;

int main() {
 
  for(int i=1; i<=26; i++)
  {
    char letter='A';
    
    for(int j=1; j<=i; j++)
    {
     cout<<letter<<" ";
     letter++;
    }
    cout<<endl;
  }
}