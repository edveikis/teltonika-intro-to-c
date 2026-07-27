#include "stdio.h"
#include "stdlib.h"

int main()
{
    int* memory = calloc(5, sizeof(int));

    if (memory == NULL)
        return 1;

    // for (int i = 0; i < 5; ++i)
    //     memory[i] = i * i;
    
    for (int i = 0; i < 5; ++i)
        printf("%d\n", memory[i]);

    free(memory);

    return 1;
}