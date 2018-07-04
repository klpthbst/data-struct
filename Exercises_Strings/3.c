/*
    3. Write a program in C that compares first n
characters of one string with first n characters of
another string.
*/

#include "ft_string.h"

int     char_compare(char a, char b) {
    return (int) (a - b);
}

int     main(void) {
    char s1[20] = "HelloWorld";
    char s2[20] = "hELLOWORLD";
    int n;
    int i;

    n = 7;
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && n-- > 0) {
        if (char_compare(s1[i], s2[i]) == 0)
            printf("s1 char is equal to s2 char: %c == %c\n", s1[i], s2[i]);
        printf("s1 char is not equal to s2 char: %c != %c\n", s1[i], s2[i]);
        i++;
    }
    return 0;
}