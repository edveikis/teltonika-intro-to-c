#include <stdio.h>
#include <string.h>

typedef struct Person {
    char name[50];
    int cityNo;
    float salary;
} person;


int main()
{
    person p;

    strcpy(p.name, "David Grigs");
    p.cityNo = 1337;
    p.salary = 50000;

    printf("name: %s\n", p.name);
    printf("name: %d\n", p.cityNo);
    printf("name: %.2f\n", p.salary);

    return 1;
}