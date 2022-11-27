#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void add_at_end(struct node *head, int data);
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

    add_at_end(head, 99);
    printData(head);

    return 0;
}

void add_at_end(struct node *head, int data){
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
     
    temp -> data = data;
    temp -> link = NULL;


    while (ptr->link != NULL)
    {
        ptr = ptr -> link;
    }

    ptr -> link = temp;
    
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