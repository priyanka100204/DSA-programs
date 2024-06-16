// code run ni ho rha 



#include<iostream>

using namespace std ;
int main (){
    int n ;
    cin >> n ;
    int mask= 0 ;
    int m = n;
    int ans ;
    // edge case 
    if(n==0){
        ans = 1  ;
    }
    else {
    while(n!=0){
        mask=(mask<<1) | 1 ;
        m= m>>1;
    }
    ans= (~n ) & mask ;
    cout << ans ;
}
}