#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *deleteFirstNode(struct node *head);
void printData(struct node *head);

int main()
{
    struct node *head = NULL;

    // first node
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    // 2nd node
    struct node *next = NULL;

    next = malloc(sizeof(struct node));
    next->data = 53;
    next->link = NULL;

    head->link = next;

    // 3rd node
    next = malloc(sizeof(struct node));
    next->data = 69;
    next->link = NULL;

    head->link->link = next;

    printf('linkedList Before deletion : \n');
    printData(head);

    head = deleteFirstNode(head);

    printf('linkedList After Deletion : \n');
    printData(head);

    return 0;
}

struct node *deleteFirstNode(struct node *head){
    struct node *ptr = head;

    if (head == NULL){
        printf('list is empty');
    }
    else{
        struct node *temp = head;
        head = head -> link;
        free(temp);
        temp = NULL;
    }
    return head;
}



void printData(struct node *head)
{

    if (head == NULL)
    {
        printf("linked list is empty");
    }

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->link;
    }
}