#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void text_printer(char *msg);

int main(void)
{
    char *buffer = (char*)malloc(25);// one line it

    // check if malloc even succeeded
    if (buffer == NULL)
        return 1;

    strncpy(buffer, "Some random text", 24); // limit size
    buffer[24] = '\0';
    text_printer(buffer);
    free(buffer);
    return 0;
}

void text_printer(char *msg)
{
    printf("%s\n", msg);
    // free(msg); // the function that allocates takes care of it
}