#include <stdio.h>

void main() {
    int v[5] = {1, 2, 3, 4, 5};
    int *pointer = v;

    v[2] = 10;
    pointer[3] = 20;

    printf("pointer %p \n", pointer);

    printf("v[0] = %i the pointer is %p \n", v[0], pointer);
    printf("v[1] = %i the pointer is %p \n", v[1], pointer + 1);
    printf("v[2] = %i the pointer is %p \n", v[2], pointer + 2);
    printf("v[3] = %i the pointer is %p \n", v[3], pointer + 3);
    printf("v[4] = %i the pointer is %p \n", v[4], pointer + 4);

    printf("\n");
    printf("----------- FROM POINTER ----------- \n");

    printf("v[0] = %i the pointer is %p \n", *pointer, pointer);
    printf("v[1] = %i the pointer is %p \n", *(pointer + 1), pointer + 1);
    printf("v[2] = %i the pointer is %p \n", *(pointer + 2), pointer + 2);
    printf("v[3] = %i the pointer is %p \n", *(pointer + 3), pointer + 3);
    printf("v[4] = %i the pointer is %p \n", *(pointer + 4), pointer + 4);

    printf("\n");
    printf("----------- FROM ARRAY POINTER ----------- \n");
    printf("v[0] = %i \n", *(v));
    printf("v[1] = %i \n", *(v + 1));
    printf("v[2] = %i \n", *(v + 2));
    printf("v[3] = %i \n", *(v + 3));
    printf("v[4] = %i \n", *(v + 4));
}