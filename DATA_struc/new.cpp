#include <iostream>
using namespace std ;
int main ()
{
    int n;
    cin >> n ;
    int a=0;
    int b=1;
    int sum ;
    for (int i = 1 ; i < n ;i++){
        sum=a+b;
        b=a;
        a=sum ;
    }
        cout << "Nth term of fibonnaci number "<< " " << sum ;






}