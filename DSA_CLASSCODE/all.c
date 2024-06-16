#include<stdio.h>
// a is collection of two sorted arrays 
void function(int a[], int size ){
    int m=0;
    int n=0;
    int c[size];
    for(int i= 0 ;i<size;i++){
        if(a[i]>a[i+1]){
            m=i;
            n=size-(i+1);
}

    }
    int i , j , k;
    i=0;
    j=i+1;
   
    while(i<m && j<n){
         k=0;
        if(a[i]<a[j]){
            c[k++]=a[i++];
           
            
        }
        else {
            c[k++]=a[j++];
              
        }
    } 
    for ( ;i<m;i++){
        c[k++]=a[i++];
    }
    for ( ;j<n;j++){
        c[k++]=a[j++];
          
    }
    for(int i=0 ; i<size ;i++){
        a[i]=c[i];
    }
    for(int i=0 ; i<size ; i++){
        printf("%d ",a[i]);
    }


}

int main ()
{
    int a[]={2,5,8,12,3,6,7,10};
    int size=sizeof(a)/sizeof(a[0]);
    function( a, size );

}
