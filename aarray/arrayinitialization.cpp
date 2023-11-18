#include<iostream>
using namespace std;
 int main(){
    //declaration of array
    int a[15];
    //accessing an array
    cout<<"value at 15index"<<endl<<a[15]<<endl;
    cout<<"eveything is fine"<<endl;
    //initialising an array

    int second[3]={10, 5,11};
    cout<<"value at index 2 "<<second[2]<<endl;

    int third[15]={2,7};
    int n=15;
    cout<<"printing the array"<<endl;
    //printing the array
    for(int i=0; i<n; i++)
    cout<<third[i]<< " ";
    cout<<endl;

    int fourth[10]={0};
    int x=10;
    for(int i=0;i<x;i++)
  
    cout<<fourth[i]<<" ";
    cout<<endl;

    int fifth[10]={1};
    n=10;

    for(int i =0;i<n;i++){
      cout<<fifth[i]<<" ";

      //size of array
 
    }
     int  fifthsize= sizeof(fifth)/sizeof(int);
     cout<<fifthsize;
   
    return 0;

 }