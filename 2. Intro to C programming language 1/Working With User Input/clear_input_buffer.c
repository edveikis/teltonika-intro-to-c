
#include "stdio.h"

int main()
{
    //
    // \n gets left over
    //
    // int num;
    // char ch;

    // printf("Enter a number: ");
    // // User enter "10" and the buffer has "10\n"
    // scanf("%d", &num);  

    // printf("Enter a character: ");
    // // Reads leftover '\n' instead of waiting for input
    // ch = getchar();     


    //
    // Clear input buffer
    //
    char str[80], ch;
    
    scanf("%s", str);
   
    // Clear input buffer
    while ((getchar()) != '\n');       
    ch = getchar();      

    // display the string   
    printf("%s\n", str); 

    // display the characters   
    printf("%c", ch);    

    return 0;
}