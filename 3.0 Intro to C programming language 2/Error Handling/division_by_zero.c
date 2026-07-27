#include <stdio.h>
#include <stdlib.h>

void division(int x){
    if(x==0){
        printf("Division by Zero is not allowed!");
        exit(EXIT_FAILURE); //unsuccessful termination
    }
    else{
        float fx = 10/x;
        printf("f(x) is: %.5f",fx);
    }
}
  
int main(){
    int x = 0; 
    
    division(x);

    return 0;
}
