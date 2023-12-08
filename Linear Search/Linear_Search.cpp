// Linear Search
#include <iostream>  
using namespace std;  
int linearSearch(int a[], int n, int val) {  
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == val)  
        return i+1;  
    }  
  return -1;  
}  
int main() {  
  int a[] = {69, 39, 29, 10, 56, 40, 24, 13, 51};
  int val = 56; // value to be searched  
  int n = sizeof(a) / sizeof(a[0]); // size of array  
  int result = linearSearch(a, n, val);
  cout<<"The elements of the array are - ";  
  for (int i = 0; i < n; i++)  
  cout<<a[i]<<" ";    
  cout<<"\nElement to be searched is - "<<val;    
  if (result == -1)  
  cout<<"\nElement is not present in the array";  
  else  
  cout<<"\nElement is present at "<<result<<" position of array";  
  return 0;  
}
