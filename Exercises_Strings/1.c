/*
    1. Write a program in which a string is passed as an
argument to a function.
*/

#include "ft_string.c"


int     main(void) {
    char s[10] = "heelloo";

    printf("string length = %d\n", ft_strlen(s));
    return 0;
}