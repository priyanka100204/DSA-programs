#include<stdio.h>

 void TOH(int n, int a , int b  , int c ){
        
           if(n>0){
                TOH( n-1, a,c,b);
            printf("move %d to %d \n", a,c );
                TOH(n-1,b,a,c);

               }
               
    }
 

int main(){
    int a=1;
    int b=2;
    int c=3 ;
   //TOH(3,a,b,c);
    TOH(4,1,2,3);
    
   
}