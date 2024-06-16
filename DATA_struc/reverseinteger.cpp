#include<iostream>
using namespace std ;//reverse integer 
// ans = ans* 10+ digit 
#include<iostream>
using namespace std ;
#include<math.h>
int reverseint(){
    int n ;
    cin >> n ;
    int ans = 0 ;
    int INT_MAX=pow(2,31)-1;
    int INT_MIN =pow(2,31);
    if ( ans > INT_MAX/10 || ans < INT_MIN/10){
        return -1 ;

    }
    while ( n!=0){
        int digit = n%10;
         ans = ans * 10 + digit ;
         n=n/10;

    }
    return ans ;


}
int main (){
    cout << reverseint() << " " << "My name is lakhhan :-) " << endl;
}