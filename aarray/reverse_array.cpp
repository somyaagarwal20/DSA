#include<iostream>
using namespace std;

void reverse(int arr[], int n){
        int start = 0;
        int end = n-1;
        while (start<=end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        
}

void printarray(int arr[], int n){
     for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
     }
     cout<<endl;
}



int main(){
    int arr[5]={5,9,6,8,3};
    int brr[6]={-1, -5 , 8 , 7 ,13, 17};

    printarray(arr, 5);
    printarray(brr, 6);

      reverse(arr , 5);
      reverse(brr , 6);

return 0;

}