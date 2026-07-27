#include "stdio.h"
#include "stdlib.h"

struct threeNum
{
   int n1, n2, n3;
};

int main()
{
    //
    // write
    //
    int n;
    struct threeNum num;
    FILE* f = fopen("binary_input.bin", "wb");

    if (f == NULL)
        return 1;

    for (n = 1; n < 5; ++n)
    {
        num.n1 = n;
        num.n2 = 5*n;
        num.n3 = 5*n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, f);
    }

    fclose(f); 

    //
    // read
    //
    FILE* rb = fopen("binary_input.bin", "rb");

    if (rb == NULL)
        return 1;

    for(n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct threeNum), 1, rb);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(rb);

    //
    // in reverse
    //
    FILE* back = fopen("binary_input.bin", "rb");

    if (back == NULL)
        return 1;

    fseek(back, -sizeof(struct threeNum), SEEK_END);

    for(n = 1; n < 5; ++n)
    {
       fread(&num, sizeof(struct threeNum), 1, back); 
       printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
       fseek(back, -2*sizeof(struct threeNum), SEEK_CUR);
    }

    fclose(back); 

    return 0;
}