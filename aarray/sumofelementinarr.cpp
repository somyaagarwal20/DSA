#include<iostream>
using namespace std;
void printsum(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
    }
    cout<<sum<<endl;
}
int main(){
    int arr[5]={4,5,50,2,8};
    int n=5 ;
    for(int i=0; i<n ; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;

    printsum(arr , 5);

    return 0;

}