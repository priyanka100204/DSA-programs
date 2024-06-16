#include<iostream>
using namespace std ;
void Reversearray(int arr[] , int  size ){
    int start = 0;
    int end = size-1;
    while(start <= end){
        swap(arr[start] , arr[end]) ;
         start++;
         end--;

    }
    
}
void printingarray(int arr[] , int size) {

        for(int i = 0 ; i<size ; i++ ) {
            cout << arr[i]<<"  ";
        }
    }
int main ()
{
    int arr[5] = {1,5,6,9,7};
    Reversearray(arr,5);
    printingarray(arr,5);
}