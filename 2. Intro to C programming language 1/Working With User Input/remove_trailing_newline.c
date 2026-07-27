#include "stdio.h"
#include "string.h"

#define BUFFER_SIZE 24

void removeNewLineChar(char *ptr)
{
    while((ptr != NULL) && (*ptr != '\n'))
    {
        ++ptr;
    }
    *ptr = '\0';
}

//
// remove endl
//
int main()
{
    char buff[BUFFER_SIZE];

    printf("Enter data = ");

    if (fgets(buff, sizeof(buff), stdin) == NULL)
        printf("Failed to read input");

    //
    // method 1
    //
    // else
    //     buff[strlen(buff) - 1] = '\0';

    //
    // methpod 2
    //

    // else 
    // {
    //     char* ptr = strchr(buff, '\n');
    //     if (ptr)
    //         *ptr = '\0';
    // }

    //
    // Method 3
    //

    // else 
    //     buff[strcspn(buff, "\n")] = '\0';

    //
    // Method 4
    //

    // else
    //     strtok(buff,"\n");

    //
    // Method 5
    //

    else
        removeNewLineChar(buff);

    printf("Entered data = %s\n", buff);

    return 0;
}