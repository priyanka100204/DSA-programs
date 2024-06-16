#include<stdio.h>
// selection sort 

void selection_sort (int array [],int length){
   int j , k ;
    for(int i=0; i<length-1;i++){
        for( j=i+1 , k=i;j<=length-1;j++ ){
            if(array[j]<array[k]){
                k=j;
            }

        }
        int temp = array[i];
        array[i]=array[k];
        array[k]=temp;

    }
}
int main (){
    int array[]={1,8,9,5,4,6};
    selection_sort(array,6);
    for(int i=0;i<6 ; i++){
        printf("%d ",array[i]);
    }

}