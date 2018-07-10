/*
    1. Write a program in which a string is passed as an
argument to a function.
*/

#include "ft_string.c"


int     main(void) {
    char s[10] = "testt";

    printf("string length = %zu\n", ft_strlen(s));
    return 0;
}