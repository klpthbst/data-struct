/*
    2. Write a program in C to concatenate first n
characters of a string with another string.
*/

#include "ft_string.c"

#define SIZE 10

int     main(void) {

    char arr_from[SIZE] = "1234qwe";
    char arr_to[2 * SIZE] = "asd";
    int n;
    int j;

    n = 4;
    j = 0;
    for(int i = 0; i < 2 * SIZE; ++i) {
        if (arr_to[i] == '\0') {
            while(j < n) {
                arr_to[i++] = arr_from[j++];
            }
        }
    }
    j = 0;
    while(arr_to[j] != '\0')
        printf("%c\n", arr_to[j++]);
    return 0;
}
