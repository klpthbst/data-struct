/*
    4. Write a program in C that removes leading and
trailing spaces from a string.
*/

#include <string.h>
#include "ft_string.c"

#define SIZE 100

int     main(void) {

    char                str[SIZE];
    int                 leading;
    int                 trailing;
    int                 i;
    int                 length;

    i = 0;
    leading = 0;
    trailing = 0;
    printf("enter the string : ");
    fgets(str, SIZE, stdin);
    length = ft_strlen(str);
    str[length - 1] = '\0'; // removing newline!
    length -= 1;
    while(str[i] >= 9 && str[i] <= 32 && str[i] != '\0') {
        leading++;
        i++;
    }

    i = length - 1;
    while(i > 0 && str[i] >= 9 && str[i] <= 32) {
        trailing++;
        i--;
    }

    if(leading != 0) {
        for(i = 0; i < length - leading - trailing; ++i) {
            str[i] = str[i + leading];
        }
    }
    str[length - leading - trailing] = '\0';
    printf("%d leading\n", leading);
    printf("%d trailing\n", trailing);
    printf("%d length\n", length);
    printf("%s", str);
    return 0;
}