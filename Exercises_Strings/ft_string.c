#include "ft_string.h"

size_t          ft_strlen(const char *s) {

    size_t  i;

    i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}

void            ft_charreplace(char *s, char src, char dest) {

    int     i;

    i = 0;
    while(s[i] != '\0') {
        *(s + i) = *(s + i) == src ? dest : *(s + i);
        i++;
    }
}

int             ft_isdigit(char c) {

    return (c >= '0' && c <= '9');
}

int             ft_isupper(char c) {

    return (c >= 'A' && c <= 'Z');
}

int             ft_islower(char c) {

    return (c >= 'a' && c <= 'z');
}

int             ft_charoccurences(const char *s, char c) {

    int     i;
    int     count;

    count = 0;
    i = 0;
    while(s[i] != '\0')
        count += (s[i++] == c) ? 1 : 0;
    return count;
}
