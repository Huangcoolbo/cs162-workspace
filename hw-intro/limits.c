#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;
<<<<<<< HEAD

    // Stack size
    getrlimit(RLIMIT_STACK, &lim);
    printf("stack size: %ld\n", lim.rlim_cur);

    // Process limit
    getrlimit(RLIMIT_NPROC, &lim);
    printf("process limit: %ld\n", lim.rlim_cur);

    // Max file descriptors
    getrlimit(RLIMIT_NOFILE, &lim);
    printf("max file descriptors: %ld\n", lim.rlim_cur);

=======
    printf("stack size: %ld\n", 0L);
    printf("process limit: %ld\n", 0L);
    printf("max file descriptors: %ld\n", 0L);
>>>>>>> 992252b50f040d3e025c093773e6c086151c0f2d
    return 0;
}
