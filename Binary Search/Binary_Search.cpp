#include <iostream>
using namespace std;

int binarySearch(int array[], int value, int low, int high) 
{
  while (low <= high) 
  {
    int mid = (low + high) / 2;

    if (value==array[mid])
    {
      return mid;
    }
    else
    {
     if (value<array[mid])
       high = mid - 1;

     else
       low = mid + 1;	
	}
  }

  return 0;
}

int main() {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int value = 4;
  int n = sizeof(array) / sizeof(array[0]);
  int result = binarySearch(array, value, 0, n - 1);
  cout<<"Value found in index "<<result;
}
