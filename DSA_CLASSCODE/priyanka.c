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
//#2
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
//3
#include<stdio.h>
//shayad c language me swap function nhi hota - ha bhai nhi hota 
// bubble short 
int main (){
    int arr[6]={12,5,10,9,7,6};
    for(int i = 0; i<6;i++){
        for (int j=0; j<6-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0 ;i<6;i++){
        printf("%d ", arr[i]);

    }
}

//4
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
//5
//mergesort 
