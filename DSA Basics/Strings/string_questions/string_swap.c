#include <stdio.h>
#include <string.h>

/*
1. strlen
2. strcpy
3. strcat 
4. strcmp 

*/

int main()
{   
    char firstName[25];
    printf("Enter First Name : ");
    fgets(firstName, sizeof(firstName), stdin);

    char lastName[25];
    printf("Enter Last Name : ");
    fgets(lastName, sizeof(lastName), stdin);

    printf("After swap Change");
    printf("First Name : %c", firstName);
    printf("Last Name : %c", lastName);
    

    char temp[50];

    strcpy(firstName, temp);
    strcpy(firstName, lastName);
    strcpy(lastName, temp );

    printf("After swap Change");
    printf("First Name : %c", firstName);
    printf("Last Name : %c", lastName);
    

    return 0;
}
