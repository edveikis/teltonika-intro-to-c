#include <signal.h>

int main() 
{
    // SIGINT signal to curr process
    raise(SIGINT);
    
    

    return 0;
}