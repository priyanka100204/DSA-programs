#include<iostream>
using namespace std ;
#include<math.h>
bool ispoweroftwo( int n ){
    for(int i = 0 ; i< 30 ;i++){

        if (n== pow(2,i) ){
            return 1 ;
        }
    }
   
        return 0 ;
    

}

int main ()
{
    int n ;
    cin >> n ;
    bool found = ispoweroftwo( n ) ;
    cout << found ;
     
}