/*
    8. Write a program to accept a text. Count and
display the number of times the word ‘the’ appears
in the text.
*/

#include <stdio.h>
#include "ft_string.c"

#define BUFF 4096

int     main(void) {

    char    str[BUFF];
    char    c[] = "thethe";
    int     count;
    int     i;
    int     j;
    int     len;
    int     tmp;

    count = 0;
    i = 0;
    j = 0;
    len = ft_strlen(c);
    tmp = len;
    fgets(str, BUFF - 1, stdin);
    while (str[i] != '\0') {
        if(str[i] == c[0]) {
            tmp = len;
            j = 0;
            while(str[i] == c[j] && (str[i] != '\0') && (c[j] != '\0')) {
                tmp--;
                i++;
                j++;
            }
            count += tmp == 0 ? 1 : 0;
        }
        else {
            i++;
        }
    }
    printf("count word \"%s\" in text: %d times\n", c, count);
}