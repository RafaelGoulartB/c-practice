#include <stdio.h>

void main() {
    int v[5] = {1, 2, 3, 4, 5};

    printf("\n");
    printf("----------- WHILE ----------- \n");
    int counter = 0;
    while (counter < 5) {
        printf("v[%i] = %i \n", counter, v[counter]);
        counter++;
    };

    printf("\n");
    printf("----------- FOR ----------- \n");
    for(int i = 0; i < 5; i++) {
        printf("v[%i] = %i \n", i, v[i]);
    };
};