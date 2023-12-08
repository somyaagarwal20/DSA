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

int main(){
    int n=6;
    int arr[6]={3,4,5,6,1,2,};
  cout<<"pivot element at the index :"<<findPivotElement(arr,n);

   
}