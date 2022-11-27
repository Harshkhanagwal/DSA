#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void addNode(struct node *head, int data, int pos);
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



    addNode(head, 87, 3);
    printData(head);

    return 0;
}

void addNode(struct node *head, int data, int pos){
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));

    ptr2 -> data = data;
    ptr2 -> link = NULL;

    pos--;

    while (pos != 1){
        ptr = ptr -> link;
        pos--;
    }

    ptr2 -> link = ptr ->link;
    ptr -> link = ptr2;
    
    
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