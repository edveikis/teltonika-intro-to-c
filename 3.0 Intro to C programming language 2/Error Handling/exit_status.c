#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
  
int main(){
    FILE *fp;
    fp = fopen ("test.txt","r");

    if(fp==NULL){
        printf("Value of errno: %d",errno);
        perror("Error printed by perror");
        exit(EXIT_FAILURE); //Good practice to exit the program using exit status
        
        printf("This message will not be printed!"); 
    }
    else{
        fclose (fp);
        exit(EXIT_SUCCESS); //Successful exit from the program
        
        printf("This message will not be printed!"); 
    }
    
    return 0;
}
