#include <stdio.h>
#include <string.h>

int calculate_length(char * string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}


void main() {
    char *string2 = "abc";
    char string[] = "abc2";  

    printf("stringWithPointer = %s, and the lenght of string is %i \n", string2, calculate_length(string2));
    printf("string = %s, and the lenght of string is %i \n", string, strlen(string));
};