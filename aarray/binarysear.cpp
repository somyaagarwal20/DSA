#include<iostream>
using namespace std; 

int BinearySearch(int array[], int size , int key){
    int start=0;
    int end=size-1;
    while(start<=end){
      int mid=end+(start- end)/2;
        if(key==array[mid]){
            return mid;
        }
        else if(key>array[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=end+(start-end)/2;
    }
    return -1;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int brr[6]={5,6,7,8,9,10};

    cout<< "key present at index "<<BinearySearch(arr,5,4)<<endl;
    cout<< "key present at index "<<BinearySearch(brr,6,11);

    return 0;
}