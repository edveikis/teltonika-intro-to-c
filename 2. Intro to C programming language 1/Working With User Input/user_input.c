#include <stdio.h>

int main()
{
    //
    // scanf
    //
    // char str1[5];
    // scanf("%5s", str1); // limit to 5
    // printf("%s\n", str1);

    //
    // gets
    //
    // char str2[5];
    // gets(str2);
    // printf("%s", str2);

    //
    // fgets
    //
    char str2[5];
    if (fgets(str2, 5, stdin) != NULL)
        printf("%s\n", str2);



    return 0;
}