#include<iostream>
using namespace std;

int Max_Of_Array(int num[], int n){
    int maximum = INT8_MIN;
    for(int i=0; i<n ;i++){
        // if(num[i]>max){
        //     max=num[i];
        // }
     maximum = max(maximum,num[i]);
    }
    return maximum;
}


int Min_Of_Array(int num[], int n){
    int minimum = INT8_MAX;
    for(int i=0; i<n ;i++){
        // if(num[i]<min){
        //     min=num[i];
        // }
        minimum = min(minimum,num[i]);
    }
    return minimum;
}



int main(){
int size;
cin>>size;
 //array print karenge
  int num[100];
 for(int i=0; i<size;i++){
    cin>>num[i];

 }

 cout<<"maximum value in array "<<Max_Of_Array(num , size)<<endl;
 cout<<"minimum value in array "<<Min_Of_Array(num,size)<<endl;


return 0;

}