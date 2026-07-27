#include "stdio.h"


int main()
{
    int num;
    FILE* f = fopen("output.txt", "w");

    if (f == NULL)
        return 1;

    printf("Enter number: ");
    scanf("%d", &num);

    fprintf(f, "%d", num);

    fclose(f);

    FILE* fd = fopen("output.txt", "r");

    if (fd == NULL)
        return 1;

    int scanned;
    fscanf(fd, "%d", &scanned);

    printf("%d\n", scanned);

    fclose(fd);

    return 0;
}