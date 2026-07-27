#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int cityNo;
    float salary;
} person;


int main()
{
    struct Person person;

    strcpy(person.name, "David Grigs");
    person.cityNo = 1337;
    person.salary = 50000;

    printf("name: %s\n", person.name);
    printf("name: %d\n", person.cityNo);
    printf("name: %.2f\n", person.salary);

    return 1;
}