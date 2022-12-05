#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*top = NULL;

void printData(struct node *head);

int main(){


    //we have created a empty linkedlist
    //which can be used to create stack based on linked list

    //follow stack operations for further 

    return 0;
}


void printData(struct node *head){

    if (top == NULL){
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
