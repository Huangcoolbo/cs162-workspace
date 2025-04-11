#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;

    // Stack size
    getrlimit(RLIMIT_STACK, &lim);
    printf("stack size: %ld\n", lim.rlim_cur);

    // Process limit
    getrlimit(RLIMIT_NPROC, &lim);
    printf("process limit: %ld\n", lim.rlim_cur);

    // Max file descriptors
    getrlimit(RLIMIT_NOFILE, &lim);
    printf("max file descriptors: %ld\n", lim.rlim_cur);

    return 0;
}
