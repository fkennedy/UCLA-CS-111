#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("location of code  : %p\n", (void *) main);
    printf("location of heap  : %p\n", (void *) malloc(1));
    int x = 3;
    printf("location of stack : %p\n", (void *) &x);
    exit(1);
}

// output of code
// location of code  : 0x10da0bec0
// location of heap  : 0x7fd3534027f0
// location of stack : 0x7fff521f4a6c