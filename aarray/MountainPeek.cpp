#include<iostream>
using namespace std; 

int peakElement(int array[], int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<end)
    {
        if(array[mid]<array[mid+1]){
            start=mid+1;
        }
        else {
            end=mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
    
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<peakElement(arr,n);
}