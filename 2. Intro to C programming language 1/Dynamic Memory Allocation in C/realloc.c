#include "stdio.h"
#include "stdlib.h"

int main()
{
    int *data = calloc(5, sizeof(int));

    if (data == NULL)
        return 1;

    int *tmp = (int*)realloc(data, 10* sizeof(int));

    if (data == NULL)
    {
        free(data);
        return 1;
    }

    return 0;
}