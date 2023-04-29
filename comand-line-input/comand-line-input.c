#include <stdio.h>

void main(int argc, char **argv) {
    printf("Arguments count - %d \n", argc);
    
    for(int i=0; i < argc; i++) {
        printf("arg: %d - %s \n", i, argv[i]);
    }
}