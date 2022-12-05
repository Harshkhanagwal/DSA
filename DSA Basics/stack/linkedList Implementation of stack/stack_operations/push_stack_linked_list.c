#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*top = NULL;

void push(int data);
void printData();

int main(){

    push(78);
    push(76);
    push(69);
    push(43);

    printData(top);

    

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