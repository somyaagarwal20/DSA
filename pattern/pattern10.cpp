#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=1;
    char ch='A'; 
    while (i<=n)
    {
       int j=1;
       while (j<=n)
       {
        cout<<ch;
        j++;
        ch++;
       }
       i++;
       cout<<endl;
       
       
    }
    
}