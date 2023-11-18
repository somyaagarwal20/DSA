#include<iostream>
using namespace std;

void print_array(int arr[], int size){
    cout<<"printing the array"<<endl;
    
    for(int i=0; i<size;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"welldone!"<<endl;
    cout<<endl;
}

int main(){
int first[15];
cout<<"value at 5th index : "<<first[5]<<endl;
cout<<endl;

int second[]={1,3,4};
cout<<"value at 2nd index "<<second[2]<<endl;
cout<<endl;

int third[15]={2,7};
int n=15;
print_array(third,15);

int fourth[10]={0};
n= 10 ;
print_array(fourth,10);

int fifth[10]={1};
n=10;
print_array(fifth,10);

int  fifthsize= sizeof(fifth)/sizeof(int);
     cout<<"actual size of array "<<fifthsize;




    
}