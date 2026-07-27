#include "stdio.h"

int main()
{
    fprintf(stdout, "This is Linuxhint. ");

    fflush(stdout);

    fprintf(stderr, "This is about fflush(). ");

    fprintf(stdout, "This is explained using the c programming. \n");

    fflush(stdout);

    return 0;
}