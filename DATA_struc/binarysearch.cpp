#include<iostream>
using namespace std ;
int BinarySearch(int arr[] , int size , int key ){
    int start = 0 ;
    int end = size - 1 ;
    int mid = start + (end-start) / 2 ;

            while(start<=end){
                if (key==arr[mid]){
                    return mid ;
                }
                else if (key> arr[mid]){
                    start = start+1;

                }
                else{
                    end = end - 1 ;
                }
                mid = start + (end - start) / 2 ;
            }

            return -1 ;

}


int main ()
{           int even[4] = {1,2,3,4} ;
            int odd[5] = {1,2,8,7,9} ;

        int storeAns = BinarySearch(even , 4 , 8) ;

        cout << "position of given key is : "<< storeAns << endl;
}