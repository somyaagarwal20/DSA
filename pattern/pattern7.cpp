#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i= 1;

    while(i<=n){
         int a=i;
        int j=1;
        while(j<=i){
            cout<<a;
            j++;
            a++;
        }
        i++;
        cout<<endl;
    }
}