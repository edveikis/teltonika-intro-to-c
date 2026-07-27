#include "stdio.h"

int main()
{
    int age;
    float weight;
    char name[25];

    FILE* f = fopen("input.txt", "r");

    if (f == NULL)
        return 1;

    int success = fscanf(f, "%d %f %24[^\n]", &age, &weight, &name);

    if (success != 3)
        return 1;

    printf("age: %d, weight: %.2f, name: %s\n", age, weight, name);

    success = fscanf(f, "%d %f %24[^\n]", &age, &weight, &name);

    if (success != 3)
        return 1;

    printf("age: %d, weight: %.2f, name: %s\n", age, weight, name);


    return 0;
}