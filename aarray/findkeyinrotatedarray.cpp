#include<iostream>
using namespace std;

int findPivotElement(int array[], int size){
    int end=size-1;
    int start=0;
    int mid= start + (end-start)/2;
    while(start<end){
       if(array[mid]>=array[0]){
              start=start+1;
       }
       else{
        end=mid;
       }
       mid= start + (end-start)/2;
    }
    return start;
}

int binarySearch(int arr[] , int s , int e, int key){
    int start =s;
    int end=e;
    while(start<=end){
        int mid= end+(start-end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            
              start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid= end+(start-end)/2;
    }
    return -1;
}

int main(){
    int n=6;
    int key=2;
    int arr[6]={4,5,6,1,2,3};
    int pivot=findPivotElement(arr,n);
    cout<<findPivotElement(arr,n)<<endl;;

    if(key<=arr[n-1] && key>=arr[pivot]){
        cout<<binarySearch(arr,pivot,n-1,key);
    }
    else{
        cout<<binarySearch(arr,0,pivot-1,key);
    }
    

   
}



