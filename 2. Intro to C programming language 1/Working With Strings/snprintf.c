#include <stdio.h>

int main()
{
    char buffer[50];
    char* s = "anicestringnice";

    printf("Writing %s onto buffer with capacity 6", s);

    int j = snprintf(buffer, 6 , "%s\n", s);

    printf("\nString written on "
           "buffer = %s",
           buffer);

    printf("\nValue returned by "
           "snprintf() method = %d\n",
           j);

    return 0;
}