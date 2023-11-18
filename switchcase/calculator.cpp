#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"enter the value of a and b";
    cin>>a;
    cin>>b;

    char op;
    cout<<"enter the operator that you want to perform";
    cin>>op;

    switch (op)
    {
    case '*': cout<<a*b;
        break;
    case '+': cout<<a+b;
        break;
    case '-': cout<<a-b;
       break;
    case '%': cout<<a%b;  
       break;     

    
    default:cout<<"its a default case";
        break;
    }
    cout<<endl;
    return 0;


}