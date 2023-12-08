//Insertion Sort
#include <iostream>  
using namespace std;  
  
void insertionSort(int a[], int n)
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j]) 
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
void displayArray(int a[], int n) 
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << a[i] <<" ";  
}  
  
int main()  
{  
    int a[] = { 89, 45, 35, 8, 12, 2 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - "<<endl;  
    displayArray(a, n);  
    insertionSort(a, n);  
    cout<<"\nAfter sorting array elements are - "<<endl;  
    displayArray(a, n);  
    return 0;  
}
