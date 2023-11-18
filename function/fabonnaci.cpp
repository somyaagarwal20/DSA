#include<iostream>
using namespace std;

int fabonnaci(int n){

    int a=0 , b=1, nextterm;
    cout<<a<<" ";
    cout<<b<<" ";
  for (int i = 0; i <(n-2); i++)
  {
     nextterm=a+b;
        cout<<nextterm<<" ";
         a=b;
         b=nextterm;
  }
  
 return 0;
    
}

int main(){
int x;
cin>>x;
fabonnaci(x);
return 0;


}