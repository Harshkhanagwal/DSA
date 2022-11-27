#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void printData(struct node *head);


int main(){
    struct node *head = NULL;

    //first node 
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    
    //2nd node 
    struct node *next = NULL;

    next = malloc(sizeof(struct node));
    next->data = 53;
    next->link = NULL;

    head->link = next;


     //3rd node 
    next = malloc(sizeof(struct node));
    next->data = 69;
    next->link = NULL;

    head->link->link = next;

    struct node *temp = NULL;
    
    temp = malloc(sizeof(struct node));
     
    temp -> data = 100;
    temp -> link = head;

    head = temp;

    printData(head);

    return 0;
}



void printData(struct node *head){

    if (head == NULL){
        printf("linked list is empty");
    }

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr -> link;
    }

    
}