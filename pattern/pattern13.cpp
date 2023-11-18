#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        int a=1;
        while (j<=i)
        {
            char ch='A' -a+i;
           cout<<ch;
           j++;
          a++;
           
        }
        i++;
        cout<<endl;
        
    }
}