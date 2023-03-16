#include <iostream>
using namespace std;
#include <cmath>

void leg()
{
  double a,c,b;
  cout<<"Length of leg a: ";
  cin>>a;
  cout<<"Length of hypotnuse: ";
  cin>>c;
  b=sqrt(pow(c,2)-pow(a,2));
  cout<<"Length of leg b: "<<b<<endl<<endl;
}

void hypotnuse()
{
  double a,b,c;
  cout<<"Length of leg a: ";
  cin>>a;
  cout<<"Length of leg b: ";
  cin>>b;
  c=sqrt(pow(a,2)+pow(b,2));
  cout<<"Length of hypotnuse: "<<c<<endl<<endl;
}

void quad()
{
  double a, b, c, disc;
  cout<<"Enter Value of a: ";
  cin>>a;
  cout<<endl;

  cout<<"Enter Value of b: ";
  cin>>b;
  cout<<endl;

  cout<<"Enter Value of c: ";
  cin>>c;
  cout<<endl;

  disc=pow(b,2)-4*a*c;
  if(disc<0)
  {
    cout<<"The roots are: \nx1=(-"<<b<<"+"<<sqrt(-disc)<<"i)/"<<(2*a);
    cout<<"\nOR\n";
    cout<<"x2=(-"<<b<<"-"<<sqrt(-disc)<<"i)/"<<(2*a)<<endl;
  }
  else if(disc>0)
  {
    cout<<"The roots are: \nx1= "<<(-b+sqrt(disc))/(2*a);
    cout<<"\nAND\n";
    cout<<"x2= "<<(-b-sqrt(disc))/(2*a)<<endl;

  }
  else
  {
    cout<<"The root is: \nx="<<(-b)/(2*a)<<endl;
  }
}

int GCF(int num1, int num2)
{
  int gcf=1;
  for(int i=2; i<=num1; i++)
  {
    if(num1%i==0 && num2%i==0)
    {
      gcf=i;
    }
  }
  return gcf;
}

int LCM(int num1, int num2)
{
  int gcf, lcm=1;
  gcf= GCF(num1,num2);
  lcm=(num1*num2)/gcf;

  return lcm;
}

int main() {
  int choice;
  cout<<"Which calculation would you like to perform? Your wish is my command: "<<endl;
  do
  {
    int choose;
    int num1, num2, lcm, gcf;
    cout<<"1. Pythagorean Theorem- Find a Leg"<<endl<<"2. Pythagorean Theorem- Find the Hypotnuse:"<<endl<<"3. Quadratic Formula - Find The Zeros of a Quadratic Equation"<<endl<<"4. Least Common Multiple"<<endl<<"5. Greatest Common Factor"<<endl;
    cin>>choose;

    switch(choose)
    {
      case 1:
      leg();
      break;

      case 2:
      hypotnuse();
      break;

      case 3:
      quad();
      break;

      case 4:
      cout<<"Number 1: ";
      cin>>num1;
      cout<<"Number 2: ";
      cin>>num2; 
      lcm=LCM(num1, num2);
      cout<<"Least Common Multiple: "<<lcm<<endl;
      break;

      case 5:
      cout<<"Number 1: ";
      cin>>num1;
      cout<<"Number 2: ";
      cin>>num2;
      gcf=GCF(num1, num2);
      cout<<"Greatest Common Factor: "<<gcf<<endl;
      break;
    }

    cout<<"Would you like to perform another calculation?"<<endl<<"1. Yes"<<endl<<"2. No"<<endl;
    cin>>choice;
    cout<<endl<<endl;
  }while (choice==1);
}