#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for(int i=0; i<size; i=i+2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}



int main(){
    int arr[5]={4,6,7,8,9};
    int brr[6]={2,3,4,5,6,7};

    swapAlternate(arr,5);
    printArray(arr,5);

}