#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*top = NULL;

void push(int data);
void printData();
int pop();
int isEmpty();
int peek();

int main(){

    push(78);
    push(76);
    push(69);
    push(43);


    printf("Top element of stack : %d", peek());



    return 0;
}


void push(int data){
    struct node * newNode;
    newNode = malloc(sizeof(newNode));

    if(newNode == NULL){
        printf("Stack Overflow");
        exit(1);
    }

    newNode -> data = data;
    newNode -> link = top;

    top = newNode;

}

int peek(){
    if(isEmpty()){
        printf("stack Underflow");
        exit(1);
    }
    return top -> data;    
}


void printData(struct node *head){

    if (head == NULL){
        printf("Stack is empty");
    }

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr -> link;
    }

    
}

int pop(){
    struct node * temp;
    temp = top;

    int val = temp->data;
    
    top = top->link;
    free(temp);

    temp = NULL;

    return val;
}

int isEmpty(){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
