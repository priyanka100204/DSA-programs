#include<stdio.h>
// binarary search - for binary search array must be sorted . 
int search_key(int arr[],int n  ,int key ){
        int s = 0;
        int e = n-1;
        int i = 0;
        int mid= s+e/2;
        while( s<=e ){
            mid=s+e/2;
            if(arr[mid]==key){
                return 1;
            }
            else if(mid<key){
                s=mid+1;
            }
            else {
                e =mid-1;
            }
        }
        return 0;

}
int main (){
    int arr[]={1,5,6,8,9,7,12};
    int key1=19;
    int ans = search_key(arr , 7 ,key1);
    printf("%d\n", ans );
    int  key2=6;
    printf("%d\n", search_key(arr , 7 ,key2) );

}