#include<iostream>
using namespace std;

void intersectionArray(int arr[],int brr[] ,int n ){
   int  start=0;

   while(start<n){
       for(int i=0;i<n;i++){
        if(arr[start]==brr[i]){
            cout<<brr[i]<<" ";
            
        }
        
       }
       start++;
    }
    cout<<endl;
    
}

// void printArray(int arr[], int n){
//     for(int i=0; i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

int main(){
    int arr[6]={3,4,1,9,9,5};
    int brr[6]={3,4,9,0,7,1};

    intersectionArray(arr,brr,6);
    return 0;

}