#include<iostream>
using namespace std;
int main(){
    int x=10;
    int &ref =x;

//now value of x becomes 20 now
    ref=20;
    cout<<"value of x is: "<<ref<<endl;

    x=30;
    cout<<"value of ref is: "<<x<<endl;

}