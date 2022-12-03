
#include <stdio.h>
// preproccesor : used to declare constant value
#define Max 4

// global declaration of stack
int stack_arr[Max];
int top = -1;

// stack operations
void push();
void isEmpty();
int isEmpty_bool();

// printing functions
void printStack();
void printTopElm();

int main()
{

    // insertion
    push(45);
    push(69);
    push(76);
    push(87);

    printf("-------------------------\n");

    printStack();

    printf("-------------------------\n");

    isEmpty();

    printf("-------------------------\n");

    return 0;
}

int isEmpty_bool()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void isEmpty()
{
    if (top == -1)
    {
        printf("yes.. Stack is Empty\n");
    }
    else
    {
        printf("no.. Stack is not Empty\n");
    }
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
