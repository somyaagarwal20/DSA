#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prod=1 ,sum=0;
    while(n!=0){
        int rem = n%10;
        sum =sum +rem;
        prod =prod*rem;

        n=n/10;
    }

    int result =prod -sum;
   cout<<result;
}