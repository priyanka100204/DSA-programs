//compliment of number 
// output nhi aa rha 

#include <iostream>
using namespace std ;
#include<math.h>

int complment(int n){
    
    int ans= 0 ;
    int i = 0;
    while ( n != 0){
       
           if (n&1){
            ans = 0*pow(10,i) + ans ;
           }
          else{

            ans = 1 * pow(10,i) + ans ;}
            i++;
            n >> 1 ;
    }
    return ans ;
}
int main (){
    cout << " hey ";
    int n ;
    cin >> n ;
    complment (n);
    cout << complment(n) << endl;
}