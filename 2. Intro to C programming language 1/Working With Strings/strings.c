#include <stdio.h>

void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}

int main()
{
    char a[] = "c string";
    char b[] = "abcd";
    char c[50] = "abcd";
    char d[] = {'a', 'b', 'c', 'd', '\0'};
    char e[5] = {'a', 'b', 'c', 'd', '\0'};

    //
    // scanf input
    //
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);

    //
    // fgets, puts
    //
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Name: ");
    puts(name);

    char name0[20] = "Harry Potter";

    printf("%c", *name0);     // Output: H
    printf("%c", *(name0+1));   // Output: a
    printf("%c", *(name0+7));   // Output: o

    char *namePtr;

    namePtr = name0;
    printf("%c", *namePtr);     // Output: H
    printf("%c", *(namePtr+1));   // Output: a
    printf("%c", *(namePtr+7));   // Output: o

    return 0;
}