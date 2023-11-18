#include<iostream>
using namespace std;

int count(int n){
    for(int i=1;i<=n;i++){
   cout<<i<<endl;
    }
}

int main(){
    int n;
    cin>>n;
   count(n);

    return 0;
}