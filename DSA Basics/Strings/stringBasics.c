#include <stdio.h>

int main()
{   
    //way to initialize string
    char str[22] = {'A', 'D', 'M', 'I', 'N', '\0'};
    char name1[25] = "Harsh";

    char fullName[70]; 

    //Normal Scanf doesn't allows you to take ' ' (space) as input in string
    scanf("%s", fullName);

    // you can use fgets function to take string as input with ' '(space) as well
    fgets(fullName, sizeof(fullName), stdin);

    return 0;
}
