// kya hi gatiya code likha hai :-)) aas pass bhi ans nhi hai 
#include<iostream>
using namespace std ;
#include <math.h>
int main ( ) {
   int n ;
   cin >> n ;
   //n = - n ; // number ke negative sign ko ignore kr diya 
   int i = 0;
   int onescomp = 0;
   while ( n !=0){
    if (n & 1) {
         onescomp = onescomp ;


    }
    else {
        onescomp = pow(10,i)+onescomp ;
    }
    i++;
    n = n>>1;

   }
  i = 0 ;
  int  ans = onescomp + 1 ;
  int finalans = 0 ;
  while ( ans != 0){
    int bit = ans  & 1 ;
    finalans = bit * (10,i) + finalans ;
   ans = ans >> 1 ;
    i++ ;

  }
  cout << " the given negative number will be store like " << " " << finalans ;







}