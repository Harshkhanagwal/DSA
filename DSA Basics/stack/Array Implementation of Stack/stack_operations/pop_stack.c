#include <stdio.h>
// preproccesor : used to declare constant value
#define Max 4

// global declaration of stack
int stack_arr[Max];
int top = -1;

// stack operations
void push();
void pop();

// printing functions
void printStack();
void printTopElm();

int main()
{

    // insertion
    push(45);
    push(69);
    push(87);

    printf("-------------------------\n");

    printf("Stack before deletion :\n");
    printStack();

    printf("-------------------------\n");
    // deleting last element
    pop();
    printf("-------------------------\n");

    printf("Stack after deletion :\n");
    printStack();

    printf("-------------------------\n");

    return 0;
}

// push operation
void push(int data)
{
    if (top == Max - 1)
    {
        printf("stack overflow");
        return;
    }

    top = top + 1;
    stack_arr[top] = data;
}

void pop()
{
    int value;
    if (top == -1)
    {
        printf("stack is empty");
        return;
    }

    value = stack_arr[top];
    top = top - 1;

    printf("Deleted Value : %d \n", value);
}

void printTopElm()
{
    if (top == -1)
    {
        printf("Stack is empty at this Moment\n");
    }
    else
    {
        printf("Top element of stack : %d\n", stack_arr[top]);
    }
}

void printStack()
{
    if (top == -1)
    {
        printf("Stack is empty at this Moment\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack_arr[i]);
        }
    }
};
