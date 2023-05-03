#include <iostream>
#include <sys/select.h>
#include <sys/time.h>

using namespace std;

static void usageError(const char *progName) {     
    fprintf(stderr, "Usage: %s {timeout|-} fd-num[rw]...\n", progName);     
    fprintf(stderr, "    - means infinite timeout; \n");     
    fprintf(stderr, "    r = monitor for read\n");     
    fprintf(stderr, "    w = monitor for write\n\n");     
    fprintf(stderr, "    e.g.: %s - 0rw 1w\n", progName);     
    exit(EXIT_FAILURE); 
}

int main(int argc, char* argv[]) {
    cout << "select" << endl;


    fd_set readfds, writefds;
    
}