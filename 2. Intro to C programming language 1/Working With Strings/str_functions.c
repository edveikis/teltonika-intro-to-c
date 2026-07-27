#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "GGWP";
    char dest[20];

    //
    // strlen
    //
    printf("%lu\n", strlen(s));

    //
    // strcpy
    //
    strcpy(dest, s);
    printf("%s\n", dest);

    //
    // strncpy
    //
    char dest0[20];
    strncpy(dest0, s, 2);
    printf("%s\n", dest0);

    //
    // strcat
    //
    char s1[10] = "haha";
    char s2[50] = " not so funny actually";

    strcat(s1, s2);

    printf("%s\n", s1);

    //
    // strncat
    //
    char s3[10] = "haha";
    char s4[50] = " not so funny actually";

    strncat(s3, s4, 4);

    printf("%s\n", s3);

    //
    // strcmp
    //
    char s5[5] = "haha";
    char s6[5] = "haha";

    if (strcmp(s5, s6) == 0)
        printf("same thing\n");
    else
        printf("not same thing\n");

    //
    // strchr
    //

    char cc[] = "Hello, world!!";

    char* res = strchr(cc, 'l');

    if (res != NULL)
        printf("Chracter found at: %ld index\n", res - s);
    else
        printf("Chracter not found\n");

    //
    // strstr
    //
    char *pos = strstr(cc, "World");
    
    if (pos != NULL)
        printf("Found\n"); 
    else
        printf("Not Found\n");

    //
    // sprintf
    //  
    char x[50];
    int n = 10;
    
    sprintf(x, "The value is %d\n", n);
    printf("%s", x);

    //
    // strtok
    //
    char z[] = "Hello, Geeks, C!";
    char *t = strtok(z, ", ");

    while (t != NULL)
    {
        printf("%s\n", t);
        t = strtok(NULL, ", ");
    }

    return 0;
}