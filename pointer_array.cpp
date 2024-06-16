#include<iostream>
using namespace std ;
void print(int *p ){
    cout << p << endl;
    cout << *p <<endl;
    cout <<&p <<endl;
}
int main (){
     /* int arr[10]={1,2,3,4,5};
    cout << arr <<endl;
    cout << arr[0]<<endl;
    cout << &arr[0]<<endl;
    cout << *arr <<endl;
    cout << &arr[1]<<endl;
    */
   int value = 5 ;
   int *ptr = &value ;
    print( ptr );
    



} 