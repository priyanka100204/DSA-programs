#include<stdio.h>
//to reverse a string using recursion 
void reverse(char *str){
    if(*str){
       // printf("%c",str+1);
        reverse(str+1);// next address ko point out kr rha h .
        printf("%c",*str);
        
    }
}
int main (){
    char array[]="priyanka";
    printf("%s",array);
    printf("\n");
    printf("%s",array);
     printf("\n");
    reverse(array);
    return 0;
}