#include<iostream>
using namespace std;
#include<climits>

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int maxnum= INT_MIN;
    int minnum = INT_MAX;

    for(int i=0; i<n;i++){
      maxnum = max(maxnum,arr[i]);
      minnum = min(minnum,arr[i]);

    }
    cout<<minnum <<" "<<maxnum<<endl;
}