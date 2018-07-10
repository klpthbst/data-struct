#include "ft_string.c"
#include <string.h>
#include <stdlib.h>

int     main(void) {
    char *s1 = malloc(6);
    char s2[] = "test";
    char s3[] = {'t', 'e', 's', 't', '\0'};

    fgets(s1, 100, stdin);

    printf("s1 ------- : %s", s1);
    printf("s2 ------- : %s\n", s2);
    printf("s3 ------- : %s\n", s3);
    return 0;
}