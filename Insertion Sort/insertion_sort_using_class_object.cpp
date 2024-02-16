//Insertion Sort
#include <iostream>  
using namespace std;  
class cl
{
    int a[30],length;
    public:
    cl()
    {
        length=5;
    }
    void inputLength()
    {
        cout<<"Enter array length"<<endl;
        cin>>length;
    }
    void inputArray()
    {
        cout<<"Enter array elements"<<endl;
        for (int i = 0; i < length; i++) 
        {
            cin>>a[i];
        }
    }
    void display()
    {
        for (int i = 0; i < length; i++) {
            cout<<a[i]<<endl;
        }
    }
    void insertionSort()
    {  
        int i, j, temp;  
        for (i = 1; i < length; i++) {  
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
  
};
  
int main()  
{  
    cl ob;
	ob.inputLength();
	ob.inputArray();
	cout<<"Array elements before sorting"<<endl;
	ob.display();
	ob.insertionSort();
	cout<<"Array elements after sorting"<<endl;
	ob.display();  
    return 0;  
}
