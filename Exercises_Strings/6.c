/*
    6. Write a program to count the number of digits,
upper case characters, lower case characters, and
special characters in a given string.
*/

#include <stdio.h>
#include "ft_string.c"

int     main(void) {
    char    *str = "dadhnuiyhnay78324983 73894jmdfhsudfhu347y i47yfhsiuye784";
    int     i;
    int     digit;
    int     lowercase;
    int     uppercase;
    int     special;

    i = 0;
    digit = 0;
    lowercase = 0;
    uppercase = 0;
    special = 0;
    while(str[i] != '\0') {
        if(ft_islower(str[i])) {
            lowercase++;
            i++;
            continue;
        }
        if(ft_isupper(str[i])) {
            uppercase++;
            i++;
            continue;
        }
        if(ft_isdigit(str[i])) {
            digit++;
            i++;
            continue;
        }
        special++;
        i++;
    }
    printf("digit count: %d\n", digit);
    printf("lowercase count: %d\n", lowercase);
    printf("uppercase count: %d\n", uppercase);
    printf("special char count: %d\n", special);
    return 0;
}