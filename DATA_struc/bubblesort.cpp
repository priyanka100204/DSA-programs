//glat aa rha
#include<iostream>
using namespace std ;
// selection sorting 
int selectionsort( int arr [] , int n ){
    for ( int i = 0; i< n-1 ; i++){
        int minIndex = i ;
        for ( int j = i+1 ; j<n ; j++){
            if ( arr[minIndex] > arr[j]){
                minIndex= j ;
            }
           
        }
         swap (arr[i],arr[minIndex]);
    }
}
     int print(int arr[] ,int n ){
    for (int i = 0 ; i <n ; i++){
        cout << arr[i] << " ";
    }
}
int main (){
    
   
    int arr[5] = {1,8,9,7,6};
    
      selectionsort(arr , 5 ) ;
        cout << print(arr , 5 );
       }