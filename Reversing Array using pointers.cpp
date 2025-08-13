//YashRastogi exp-9
//24070123135
#include <iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter the Elements of the array: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    int*arr1[5];
    arr1[5]=&arr[5];
    cout<<"The reversed array is: ";
    for(int i=0;i<5;i++)
    {
        cout<<*(arr1[5]-i-1)<<" ";
    }

}
/*
Output:
Enter the Elements of the array: 2
3
4
5
6
The Array is: 2 3 4 5 6 The reversed array is: 6 5 4 3 2 
*/