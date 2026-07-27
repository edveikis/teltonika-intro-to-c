#include <stdio.h>
#include <stdlib.h>

int writeAndGetTheLargestNumber (int a, int b) {
    int result = 0;
    FILE *fp = fopen("file_location","w");

    if(fp == NULL) {
      printf("Error! Could not open file\n");  
      exit(-1);             
    }

    if(a > b)       result = a;
    else if(b > a)  result = b;
   
    fprintf(fp, "%d is the largest number\n", result);
    
    fclose(fp);
    return result;
}

int main(void)
{
   int res = writeAndGetTheLargestNumber (3, 6);   
   return 0;
}
