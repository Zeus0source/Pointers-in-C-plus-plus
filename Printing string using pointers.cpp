//YashRastogi exp-9
//24070123135
#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a String Value: ";
    cin>>str;
    string*str1;
    str1=&str;
    cout<<*str1;
}
/*
Output:
Enter a String Value: Yash
Yash
*/