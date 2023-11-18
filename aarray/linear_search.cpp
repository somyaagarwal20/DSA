#include<iostream>
using namespace std;
bool linear_search(int arr[],int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10]={10,11,-56,78,39,2,-4,5,4,33};
   cout<<"enter the key u want to find"<<endl;
   int key;
   cin>>key;

   bool found = linear_search(arr , 10 , key);

   if(found)
    cout<<"key is present"<<endl;
   
   else 
   cout<<" key is absent"<<endl;

   return 0;
}