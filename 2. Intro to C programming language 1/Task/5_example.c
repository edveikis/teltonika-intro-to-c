#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void genRandomText(int count, char *buffer)
{
    for (int i = 0; i < count; i++) 
    {
        char symbol[2]; // snprintf writes a null terminator at the end, sizeof 1 aint enough
        int num = (rand() % (90 - 65 + 1)) + 65;

        snprintf(symbol, 2,"%c", num);

        strncat(buffer, symbol, 1);
    }

    buffer[count] = '\0';
}

int main()
{
    char *buffer = NULL;
    int i = 1;
    srand(time(0)); 
  
    while(i < 7) 
    {
        buffer = malloc(i + 1);
        buffer[0] = '\0'; // strncat needs a startping which is a null terminator...

        if (buffer == NULL)
            return 1;

        genRandomText(i, buffer);
        printf("Buffer - %s\n", buffer);

        free(buffer); // fixes memory leak
        i++;
    }

    return 0;
}