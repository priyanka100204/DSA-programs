#include<stdio.h>
//shayad c language me swap function nhi hota - ha bhai nhi hota 
// bubble short 
int main (){
    int arr[6]={12,5,10,9,7,6};
    for(int i = 0; i<6;i++){
        for (int j=0; j<6-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0 ;i<6;i++){
        printf("%d ", arr[i]);

    }
}
   