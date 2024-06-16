#include<stdio.h>
struct stack{
    int top ;
    int size ;
    int *s ;
};
void initialise(struct stack *st ,char infix[]){
   
    st->top=-1;
    st->size=sizeof(infix);
    st->s=(char *)malloc(st->size*sizeof(char));

}
int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/'){
        return 0 ;
    }
    else {
        return 1 ;
    }

}
int priority(char x){
    if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='/'|| x=='*'){
        return 2 ;
    }
    return 0;
}
void push(struct stack *st , char x){
    st->top=st->top+1 ;
    st->s[st->top]=x;
}
int pop(struct stack *st){
    int x=-1;
    x=st->s[st->top];
    st-> top=st->top-1;
    return x;
}
int isEmpty(struct stack *st ){
    if(st->top == -1){
        return 1 ;
    }
    else{
        return 0;
    }
}
char* convert(char *infix,struct stack *st  ){
    char postfix[] = (char*)malloc(st->size*(sizeof(char)+1));
    int i=0 , j= 0 ;
    for ( i ,j;i<st->size;i++){
        if(isOperand){
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(priority(infix[i]) > st->s[st->top]){
                push(&st,infix[i]);
                i++;

            }
            else if(priority(infix[i])<=st->s[st->top]){
                postfix[j]=pop(&st->s);
                j++;
                

            }
        }
    }
    while(!isEmpty(&st)){
        postfix[j++]=pop(&st);
        }
        postfix[j]='\0';
    

}
int main (){
    char infix="a+b*c";
    struct stack st;
    initialise(&st,infix);
    convert(infix,&st);
}