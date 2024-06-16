#include <iostream>
using namespace std ;
int sortingarray(int arr[] , int size ){
    int minInd = i ;
    for ( int i=0 ; i < size -1 ; i++){
          for ( int j = i+1 ; j < size ;j++){
            if ( arr(j) < arr(minInd)){
                minInd= j ;
            }
            swap ( arr(i), arr(minInd));
          }

    }

}
int main (){

}