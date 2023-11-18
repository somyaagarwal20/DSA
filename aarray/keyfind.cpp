#include<iostream>
using namespace std;
int leanear_Search(int brr[], int size, int keyval ){
    for(int i=0; i<size; i++){
        if(brr[i]==keyval){
         cout<<"key is find at "<<i<<" th index"<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
     cin>>arr[i];
        
    }
     int key;
     cin>>key;

     leanear_Search(arr,n,key);
  
}