#include <errno.h>
#include <stdio.h>
#include <string.h>
  
int main(){
    FILE* fp;
    fp = fopen("test.txt","r");
    
    if(fp==NULL){          //Error handling in case if the file doesn't exists 
        printf("Error: %s\n",strerror(errno)); 
        //errno passed as an argument to display respective order error message
    }
    fclose(fp);
    return 0;
}
