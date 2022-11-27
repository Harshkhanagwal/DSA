#include<stdio.h>

struct node{
    int data;
    struct node *link;
};


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


    return 0;
}
