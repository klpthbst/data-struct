/*
    7. Write a program to count the total number of
occurrences of a given character in the string.
*/

#include <stdio.h>
#include "ft_string.c"

int     main(void) {
    char *str = "wqeeqwe23deebssssb";
    char c = 'a';
    printf("char %c occurences %d times\n", c, ft_charoccurences(str, c));
}