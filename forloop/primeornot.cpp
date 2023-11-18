#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter the value of n"<<endl;
cin>>n;
for(int i=2;i<n;i++){
    if(n%i==0){
        cout<<"not prime"<<endl;
        break;
    }
    else{
        cout<<"prime"<<endl;
        break;
    }
}


}