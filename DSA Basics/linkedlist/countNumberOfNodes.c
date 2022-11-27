#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_of_nodes();

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

    count_of_nodes(head);
    return 0;
}

void count_of_nodes(struct node *head){
    int count = 0;

    if (head == NULL){
        printf("linked list is empty");
    }

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    printf("%d", count);
    
}