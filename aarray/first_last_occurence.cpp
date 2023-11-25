#include<iostream>
using namespace std;

int first_Occurence(int array[], int size , int key){
    int start=0;
    int end=size-1;
    int mid= start+ (end-start)/2;
    int ans = -1;
    while(start<=end){
           if(array[mid]==key){
              ans=mid;
             end=mid-1;
           }
           else if(array[mid]<key){
                 start=mid+1;
           }
           else if(array[mid]>key){
                  end=mid-1;
           }
                    mid= start+ (end-start)/2;
    }
    return ans;


}


int Last_Occurence(int array[], int size , int key){
    int start=0;
    int end=size-1;
    int mid= start+ (end-start)/2;
    int ans = -1;
    while(start<=end){
           if(array[mid]==key){
              ans=mid;
             start=mid+1;
           }
           else if(array[mid]<key){
                 start=mid+1;
           }
           else if(array[mid]>key){
                  end=mid-1;
           }
                    mid= start+ (end-start)/2;
    }
    return ans;


}

int main(){
    int n;
    cin>>n;
    int  arr[n];
    
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    int keyy;
    cin>>keyy;

    cout<<"first occurance of key at index "<<first_Occurence(arr,n,keyy)<<endl;;
    cout<<"first occurance of key at index "<<Last_Occurence(arr,n,keyy);
    
}