#include<stdio.h>
// pivot element - the element which is finding its position .
// i is looking  for greater elements than of pivot and j is looking for smaller element than pivot .
// when i crosses j then interchange pivot element with jth location .
// first do partion and then quicksort .
int partition(int a[],int l , int h ){
    int pivot =a[l];
    int i =l;
    int j=h ;
    do{
        do{i++;}while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j){
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
        while(i<j);
            int temp = a[l];
            a[l]=a[j];
            a[j]=temp;
            return j ;
}
void quicksort(int a[],int l ,int h){
    int j;
    if(l<h){
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }


}
int main ()
{
    int a[]={1,8,95,45,62,32,14};
    quicksort(a,0,7);
    for(int i=0;i<7;i++){
        printf("%d ",a[i]);

    }
}
