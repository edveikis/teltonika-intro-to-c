#include "stdio.h"
#include "stdlib.h"

int main()
{
    int* memory = malloc(20);

    if (memory == NULL)
        return 1;

    for (int i = 0; i < 5; ++i)
        memory[i] = i * i;

    for (int i = 0; i < 5; ++i)
        printf("%d: %d\n", i, memory[i]);

    free(memory);

    return 0;
}