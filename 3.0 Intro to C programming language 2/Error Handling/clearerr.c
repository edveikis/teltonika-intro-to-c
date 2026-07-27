#include <stdio.h>

int main(){
   FILE *fp;
   fp = fopen("test.txt","w");
   char ch = fgetc(fp); //Trying to read data but the file is opened in writing mode
   if(ferror(fp)) {    //ferror() will detect error in file pointer stream
      printf("Error in reading from file!");
   }
   clearerr(fp);      //clearerr() will clear error-indicators from the file stream
   if(ferror(fp)){   //No error will be detected now
      printf("Error again in reading from file!");
   }
   fclose(fp);
   return 0;
}
