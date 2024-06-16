#include<stdio.h>
// searching of key by linear method ;
//let say key is not persent 
int persent=0;
// bolian jesa c language me kuch nhi hota 
int  search_key(int arr[] , int size , int key){
    for(int i=0;i<size ; i++){
        if(arr[i]==key){
            persent=1;
            return persent ;
        }
    }

    
    return persent ;

}
int main (){
    int arr[] = {1,2,3,8,9,7};
    int ans =  search_key(arr,6,9);
    //if ans = 0 then key is not persent 
    // if ans = 1 then key is persent 
    printf(" %d ",ans);

}