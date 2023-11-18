#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *ptr = &a;
    // & ---> (address of) operator
    cout<<"the address of a is "<< &a<<endl;
    cout<<"the address of a is "<<ptr<<endl;
    // * ---> dereference  operator
    cout<<"the vlaue of a is "<<*ptr<<endl;


    // pointer to pointer which indicates the address of the pointer 
    int **c= &ptr;
    cout<<"address of pointer ptr is  "<<c<<endl;
    cout<<"address of pointer ptr is "<<&ptr<<endl;
    cout<<"value at address value_at(value_at adress c) "<<*c<<endl;
    cout<<"value at adsress c "<<**c<<endl;

}
