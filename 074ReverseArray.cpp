#include <iostream>
using namespace std;
void reversearray(int arr[], int start, int end)
{
  while (start < end) 
    { 
        int temp = arr[start];  
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }  
}

void printArray(int arr[], int size) 
{ 
   for (int i = 0; i < size; i++) 
   cout << arr[i] << " "; 
  
   cout << endl; 
} 

int main() {
  int size;
  cout<<"What is the size of your data set?"<<endl;
  cin>>size;
  int arr[size]; 

  int n = sizeof(arr) / sizeof(arr[0]);  
  for(int i = 0; i < size; i++)
  {
    cout<<"Number: ";
    cin>>arr[i];
  }

  printArray(arr, n); 
      
  reversearray(arr, 0, n-1); 
      
  cout << "Reversed array is:" << endl; 
      
  printArray(arr, n); 
      
  return 0;
}