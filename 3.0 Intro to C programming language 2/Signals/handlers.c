#include <stdio.h>
#include <signal.h>

void signalHandler(int signalNumber) 
{
    printf("Received signal: %d\n", signalNumber);
}


int main() 
{
    signal(SIGINT, signalHandler);

    for(int i=1;;i++)
    {    
        printf("%d : Inside main function\n",i);
        sleep(1);
    }

    return 0;
}