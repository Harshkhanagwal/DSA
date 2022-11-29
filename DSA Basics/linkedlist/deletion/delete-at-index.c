#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void printData(struct node *head);
struct node * deleteIndex(struct node *headp, int index);

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

    // 4th node
    next = malloc(sizeof(struct node));
    next->data = 89;
    next->link = NULL;

    head->link->link->link = next;
    
    printf("List Before deletion : \n");
    printData(head);

    deleteIndex(head, 1);

    printf("List after deletion : \n");
    printData(head);

    return 0;
}



struct node *deleteIndex(struct node *headp, int indexi){
    
    struct node *head = headp;
    struct node *headLink = head->link;
    int index = indexi-1;

    for (int i = 0; i < index; i++){
        head = head->link;
        headLink = headLink->link;
    }

    head->link = headLink->link;
    free(headLink);

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