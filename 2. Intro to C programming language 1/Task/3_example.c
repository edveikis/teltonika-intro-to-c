#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *buffer = (char*)malloc(20);

    if (buffer == NULL)
        return 1;

    strncpy(buffer, "Some random text", 20);
    printf("%s\n", buffer);
    free(buffer);

    return 0;
}