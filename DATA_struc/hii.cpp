#include<iostream>
#include<math.h>
using namespace std ;
int main (){
    
             int n ;
             cin >> n ;
    //now ignore negative sign ;
             n=-n ;
            n = ~n ;
            n= n+1 ;
            int ans = 1 ;
            int  i =0 ;
     

      while (n!=0){
         int bit = n & 1 ;
         ans = bit * pow (10,i) + ans ;
         i++ ;
         n=n>>1;
      }
      
      cout << "binary form of given negative number is ="<< ans <<  endl;











}