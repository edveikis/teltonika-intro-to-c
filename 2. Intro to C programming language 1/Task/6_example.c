#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mem_alloc(char **buffer)
{
    // dereference memory address to write the value of returned address into it
    *buffer = malloc(25 * sizeof(char));
}

int main(void)
{
    char *buffer = NULL;
    // pass in memory address of the point
    mem_alloc(&buffer);

    if (buffer == NULL)
        return 1;

    // max copy limit of size -1 
    strncpy(buffer, "Some random text to be copied to the buffer", 24);
    buffer[25] = '\0'; // null terminator
    
    printf("%s\n", buffer);
    
    free(buffer);
    
    return 0;
}