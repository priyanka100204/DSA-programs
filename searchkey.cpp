#include<iostream>
using namespace std ;
 bool search(int arr[] , int size , int key ){
    for ( int i = 0 ; i++ ; i < size ){
        if (arr[i] = key ) {
            return 1 ;
        }
    }
    return 0 ;
 }



 int main ( ){
    int key ;
     cin >> key ;
     int arr[5] = {1,5,8,9,7};
     bool found = search(arr , 5 , key);
     cout<< found <<  endl;
 }