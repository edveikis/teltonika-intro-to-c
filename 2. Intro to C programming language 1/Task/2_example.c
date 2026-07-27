#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[20];
    strncpy(buffer, "Copy this text to the buffer variable", 19); // protect from overflow
    buffer[19] = '\0'; // add terminator
    printf("%s\n", buffer);
    return 0;
}