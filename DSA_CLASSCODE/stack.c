#include<stdio.h>
#define N 3
 int stack[N]; // stack using array
 int top=-1;
 void push (int data){
    if (top==N-1){
        printf("stack is full. \n");
    }
    else{
        top=top+1;
        stack[top]=data;
    }
 }
 int  pop(){
    printf("\n value of top = %d \n ",top);
    if(top==-1){
        printf("stack is empty. \n");
    }
    else{
        return stack[top--];// phle vo value return hogi jo delete ho rhi h fir uske baad top = top - 1 ho jayega .....
 }
 }
 void tr(){
   //traversing push and pop ke middle me call hogi ;
   int ptr=top;
   while(ptr!=-1){
    printf("\n %d",stack[ptr--]);
   }
}
void findtop(){
    printf("top element is : %d " , stack[top]);
    

}
int main (){
    push(8);
    push(7);
    
    push(3);
    findtop();
    
    
    tr();
   /* printf("\n element on 0th index = %d \n",stack[0]);
    printf("elemnet on 1st index = %d \n ", stack[1]);
    printf("element on 2nd index = %d \n",stack[2]);
    
    ye uper vala kaam mene traversing se karaya hai */
    
   
  printf(" pop element =  %d \n",pop());
   printf(" pop element =  %d \n",pop());
   printf(" pop element =  %d \n",pop());
   printf(" pop element =  %d \n",pop());
      








 }