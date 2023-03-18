#include <iostream>
using namespace std;
#include <bits/stdc++.h> 

int main() 
{
  //declare variables
  double min, max, sum = 0, mean, range, median;
  int size;
  //prompt user for size
  cout << "What is the size of the dataset? ";
  cin >> size;
  //declare array
  double numbers[size];
  //loop through to initialize
  for(int i = 0; i < size; i++)
  {
	  cout << "Enter value: ";
	  cin >> numbers[i];
  }
  //assume first number is min
  min = numbers[0];
  //assume first number is max
  max = numbers[0];
  for(int i = 0; i < size; i++)
  {
	  //add all values to the sum
	  sum += numbers[i];
	  //determine if new number is min
	  if(numbers[i] < min)
	  {
		  min = numbers[i];
	  }
	  //determine if new number is max
	  if(numbers[i] > max)
	  {
		  max = numbers[i];
	  }
    sort(numbers, numbers+size); 
    if(size%2==0)
    {
      median = ( numbers[ i / 2 ] + numbers[ (i / 2) + 1 ] ) / 2.0;
    }
    if(size%2!=0)
    {
      median = numbers[ (i/2) ];
    }
  }
  //calculate mean and range
  mean = sum/size;
  range = max - min;
  //print results
  cout << "Mean: " << mean << endl << "Range: " << range << endl<<"Median: "<<median; 
}