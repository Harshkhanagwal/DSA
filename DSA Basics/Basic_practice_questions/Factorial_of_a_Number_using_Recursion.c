#include<stdio.h>

long int factorial(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d",&num);

    printf("Factorial of %d = %ld", num, factorial(num));

    return 0;
}

long int factorial(int n){
    if (n>=1){
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
}