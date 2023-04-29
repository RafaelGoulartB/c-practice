#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse0(char *str) {
    int len = strlen(str);

    for(int i = 0; i < len/2;++i) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    };
}

void reverse1(char *str) {
    char *end = str+strlen(str)-1;

    while (str < end) {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    };
};

char * reverseString2(char *s) {
    int len = strlen(s);
    char *reverseString = malloc(len + 1);

    for (int i = 0; i < len; i++) {
        reverseString[i] = s[len-1-i];
    }

    reverseString[len] = 0;

    return reverseString;
};

void main() {
    char str0[] = "hello";
    char str1[] = "test";
    reverse0(str0);
    reverse1(str1);

    printf("the reverse string of hello is %s \n", str0);
    printf("the reverse string of test is %s \n", str1);

    char string[] = "Hello World!";
    printf("the reverse string of %s is %s \n", string, reverseString2(string));
}
