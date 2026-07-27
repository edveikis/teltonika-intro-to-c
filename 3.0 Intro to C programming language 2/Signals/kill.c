#include <sys/types.h>
#include <signal.h>

int main() 
{
    pid_t pid = 1337;

    int result = kill(pid, SIGTERM);
    
    if (result == 0) 
    {
        printf("Signal successfully sent.\n");
    }
    else 
    {
        printf("Failed to send signal.\n");
    }
    
    return 0;
}