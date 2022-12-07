#include <stdio.h>
#include <string.h>

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

    strcpy(temp, firstName);
    strcpy(firstName, lastName, );
    strcpy(lastName, temp);

    printf("After swap Change");
    printf("First Name : %c", firstName);
    printf("Last Name : %c", lastName);
    

    return 0;
}
