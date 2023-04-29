#include <stdio.h>
#include <stdlib.h>

int calculate_length(char *string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

char* addLeftpad(char string[], int sizeofLeftPad) {
    int length = calculate_length(string);
    char *stringWithLeftPad = (char*) malloc(sizeofLeftPad + length + 1);

    for(int i = 0; i < length + sizeofLeftPad; i++) {
        if(i < sizeofLeftPad) {
            stringWithLeftPad[i] = ' ';
        } else if(i < length + sizeofLeftPad) {
            stringWithLeftPad[i] = string[i - sizeofLeftPad];
        } else {
            stringWithLeftPad[i] = '\0';
        };
    };

    return stringWithLeftPad;
} 

void main() {
    char string[50] = "Hello World!";

    printf("The string with leftpad of 5 is %s \n", addLeftpad(string, 5));
    printf("The string with leftpad of 10 is %s \n", addLeftpad(string, 10));
    printf("The string with leftpad of 50 is %s \n", addLeftpad(string, 50));
}