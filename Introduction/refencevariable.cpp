#include<iostream>
using namespace std;

int main(){
    float f= 34.5;
    long double  l=34.5;

    cout<< "size of 34.5 is:" << sizeof(34.5f)<<endl;
    cout<< "size of 34.5 is:" << sizeof(34.5F)<<endl;
    cout<< "size of 34.5 is:" << sizeof(34.5)<<endl;
    cout<< "size of 34.5 is:" << sizeof(34.5L)<<endl;
    cout<< "size of 34.5 is:" << sizeof(34.5l)<<endl;
}