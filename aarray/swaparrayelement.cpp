#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0; i<n ; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void function(int arr[], int n){
  for(int i=1; i<n;i=i+2){
    if(arr[i]<n){
        swap(arr[i],arr[i+1]);
       
    }
  }
}


int main(){
    int arr[6]={6,7,8,9,10,11};
    int brr[5]={3,11,23,45,4};
        
   function(arr,6);
   function(arr,5);

   printArray(arr , 6);
   printArray(brr , 5);

   return 0;

}