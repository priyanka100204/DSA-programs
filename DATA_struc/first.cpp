//out put wrong hai 
#include <iostream>
using namespace std ;
#include <math.h> 
int main (){
    // koi number diya hoga decimal like 87, 4 , etc. usko binaray form me convert krna hai 

    int n ;
    cin >> n ;
    int ans = 0 ;
    int i = 0 ;
     while(n != 0){
    
        int bit = n & 1 ;
        ans = (bit * pow(10,i) ) + ans ;
        n = n  >>  1;
        i++;
     }
     cout << ans << endl;



}