#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *user_input[12];
    
    if (user_input == NULL)
        return 1;
    
    printf("Enter your text: ");

    // limit is 12
    fscanf(stdin, "%12[^\n]", user_input);

    printf("\nYour line -> %s\n", user_input);

    return 0;
}