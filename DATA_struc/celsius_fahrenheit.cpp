#include <iostream>
using namespace std ;
int main (){
    
    int n ;
    cin >> n ;
    // n is number upto print table ;
    float i ;
    int j = 0 ;
    int f = 0;


    while (j<=n){
      
        i = (5.0/9) * (f - 32) ;
        cout << j <<" "<< "degree fehrenheit is equal to "<< i << " " << "degree celsius"<< endl;
        j++ ;
        f++;



    }


}