#include<stdio.h>
// preproccesor : used to declare constant value
#define Max 4

//global declaration of stack
int stack_arr[Max];
int top = -1;

void printStack();
void printTopElm();

int main(){

    //trying to print all elements of stack
    printStack();

    //trying to print first element of stack
    printTopElm();

    return 0;
}

void printTopElm(){
    if (top == -1){
        printf("Stack is empty at this Moment\n");   
    }
    else{
        printf("Top element of stack : %d\n", stack_arr[top]);    
    }
}

void printStack(){
    if (top == -1){
        printf("Stack is empty at this Moment\n");   
    }
    else{
        for(int i = top - 1; i>=0; i--){
            printf("%d \n ", stack_arr[i]);
        }
    }
};

