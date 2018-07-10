#include "ft_string.c"

int     main(void) {

    char    *str = "ddmeuinfsgvnb sf7i37n bfismn fg83m fsohiuf,h438";
    int     wordcount;
    char    **s;
    char    delimeter;

    delimeter = ' ';
    s = (char **) malloc(sizeof(str) * ft_wordcount(str, delimeter) + 1);
    wordcount = sizeof(str) * ft_wordcount(str, delimeter) + 1;
    printf("size of s = %d\n", wordcount);
    // s1 = ft_strncpy(s, str, 5);
    // printf("s string = %s\n", s);
    return 0;
}