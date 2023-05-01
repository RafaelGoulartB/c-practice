#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void main() {
    // Char
    printf(" ------------- Char ------------- \n");
    char character = 'a';

    printf("The character a is in the ASCII table the number %i: %c \n",
           character, character);

    // Array
    printf("\n ------------- Array ------------- \n");
    int x[50];

    x[0] = 1;
    x[50] = 51;

    printf("The first element of the array is %i and the last is %i \n", x[0],
           x[50]);

    // Struct
    printf("\n  ------------- Struct ------------- \n");
    struct Person person1;

    person1.name[0] = 'R';
    person1.name[1] = 'a';
    person1.name[2] = 'f';
    person1.name[3] = 'a';
    person1.name[4] = '\0';
    person1.age = 20;

    struct Person person2 = {"John", 19};

    printf("The name of the person is %s and the age is %i \n", person1.name,
           person1.age);
    printf("The name of the person is %s and the age is %i \n", person2.name,
           person2.age);

    // Pointers
    printf("\n ------------- Pointers ------------- \n");
    int number = 10;
    int *pointer = &number;

    printf("The number is %i and the pointer is %p \n", *pointer, pointer);

    *pointer = 14;

    printf("After change the number is %i and the pointer is %p \n", *pointer,
           pointer);

    printf("\n");
}