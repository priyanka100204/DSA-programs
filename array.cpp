#include <iostream>
using namespace std;
int   updatearray( int arr[] , int n ){
    arr[0]=15;
   // cout << arr[0]<< endl;
    return  arr[0];
}





int main (){
    int arr[10]={4,5,8};

    cout << arr[0]<< endl;
    cout << updatearray( arr , 10  ) << endl;
    cout << arr[0]<< endl;




}