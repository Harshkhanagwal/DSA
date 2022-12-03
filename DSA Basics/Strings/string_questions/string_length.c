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
    char fullName[70]; 
    printf("Enter Your Name : ");

    fgets(fullName, sizeof(fullName), stdin);

    printf("%s", fullName);


    // strlen() : to calculate the length of string
    printf("\nLength Of String : %zu", strlen(fullName));

    // strcpy : to copy one string into another
    char student[strlen(fullName)];

    //copying the full name into student
    strcpy(student, fullName);

    printf("\nStudent Name : %s", student);


    //strcat : to join two strings
    char firstName[] = "Harsh ";
    char lastName[] = "khanagwal ";

    strcat(firstName, lastName);

    printf("\n%s", firstName);

    //strcmp : to compare two strings
    int result = strcmp(firstName, lastName);

    printf("%d", result);

    return 0;
}
