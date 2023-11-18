#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

  int num;
  cout<<"enter the value of num"<<endl;
  cin>>num;
   int store=0;
   int var=0;
   switch (num)
   {
   case 100:
    store=n/100;
      cout<<store<<endl;;
       var= n-(store*100);
   
    
    
   
   case 50:
       store=var/50;
       cout<<store<<endl;
       var=var-(store*50);
    


    case 20:
    store=var/20;
       cout<<store<<endl;
       var=var-(store*20);
    

    case 1:
      store=var/1;
       cout<<store<<endl;
       var=var-(store*1);
    break;

   default:cout<<"its a default case"<<endl;
  
   }
   

}