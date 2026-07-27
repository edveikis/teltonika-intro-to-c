#include <stdio.h>
#include <stdbool.h>

int main(){
   FILE *fp;
   fp = fopen("test.txt","r");
   if(fp==NULL){
      perror("Message from perror");
      return -1;
   }
   while(true){
      char ch = fgetc(fp);
      if(feof(fp)){       
        //On detecting the end-of-file, feof() function will return non-zero value   
        //hence, it will break the loop
        break;
      }
      printf("%c",ch);
   }
   fclose(fp);
   return 0;
}
