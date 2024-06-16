#include<stdio.h>
void insertion_sort(int array [], int length){

    for(int i=1;i<length;i++){
        int j=i-1;
        int x=array[i];
        while(j>-1 && array[j]>x){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=x;


    }
}
int main(){
    int a[]={1,8,9,6,45,12,32};
    int length = sizeof(a)/ sizeof(int) ;
    printf("%d\n",length);
    insertion_sort( a ,length);  
    for(int i=0 ;i<length ;i++){
        printf("%d ",a[i]);



        
    }   
}