#include <iostream>
#include<stack>

using namespace std ;
int top=-1;
 void push (int arr[],int x ){
       //int top = -1;
   if (top==4 ){
    cout <<"stack is full"<<endl;

   }
   else {
    top=top+1;
    arr[top]=x;
    }
   }

   void pop(int arr , int top ){

    if (top==-1){
        cout <<"stcak is empty"<<endl;
    }
    else {
       return  arr[top--];
    }

   }
int main (){
   int arr[5];
  
   push(arr,40);
   cout <<top <<endl;;
   push(arr,45); 
   push(arr,4);
   push(arr,5);
   push(arr,8);
   push(arr,7);


   cout <<top<<endl;;
   push(arr,3);
   int prr[3]={1,2,3};
   //size of array =3;
    top=2;
   pop(prr,2);
   }
  
   
   
