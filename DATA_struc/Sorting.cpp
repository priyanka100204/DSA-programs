#include <iostream>
using namespace std;
int  SortingArray(  int arr[] , int  n ) {
   
    for(int i=0 ; i<n-1 ; i++){
        int minIndex = i ;
        for(int j=i+1 ; j<n ; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j ;
            }
            swap(arr[i],arr[minIndex]);
        }
    }

}
void printarray(int arr[] , int n ){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<"   ";
    }
}
int main(){
    
    int arr[5]={8,5,1,4,3};
    SortingArray(arr, 5);
    printarray(arr,5);
}