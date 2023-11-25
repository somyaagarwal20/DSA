#include<iostream>
using namespace std;

int startOcc(int array[], int size , int key){
    int start =0;
    int end=size-1;
    int mid= start+(end-start)/2;
    int ans=-1;
    while(end>=start){
        if(array[mid]==key){
            end=mid -1;
            ans=mid;
        }
        else if(array[mid]>key){
            end=mid-1;
        }
        else if(array[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int endOcc(int array[], int size , int key){
    int start =0;
    int end=size-1;
    int mid= start+(end-start)/2;
    int ans=-1;
    while(end>=start){
        if(array[mid]==key){
            start=mid +1;
            ans=mid;
        }
        else if(array[mid]>key){
            end=mid-1;
        }
        else if(array[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int keyy;
    cin>>keyy;

    cout<<"total number of occurance "<<(endOcc(arr,n,keyy)-startOcc(arr,n,keyy))+1<<endl;
     
}