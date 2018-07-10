/*
    5. Write a program in C that replaces a given
character with another character in a string.
*/

#include "ft_string.c"

int     main(void) {
    char str1[] = {'s','w','g','w',' ','3','2','s','s','w','H','\0'};
    char str2[] = {'d','a','s','g','g','g','w','h','h','h','w','\0'};
    char a = 'w';
    char b = 'H';
    printf("%s before: \n", str1);
    ft_charreplace(str1, a, b);
    printf("%s after: \n", str1);
    printf("%s before: \n", str2);
    ft_charreplace(str2, a, b);
    printf("%s after: \n", str2);
}