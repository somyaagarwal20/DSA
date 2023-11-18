#include<iostream>
using namespace std;

int duplicate(int arr[] , int n){
     int  start=0;
    while(start<n){
        for(int i=0; i<n;i++){
            if(arr[start]==arr[i]){
                cout<<arr[start]<<" ";
            }
        }
        start++;
    }
}

int main(){
    int arr[6]={3,2,5,5,3};
    duplicate(arr,6);

}