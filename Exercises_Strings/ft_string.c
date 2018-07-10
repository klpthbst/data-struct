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

char            *ft_strncpy(char *dst, const char *src, size_t n) {

    size_t  i;

    i = 0;
    while(i < n && src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while(++i < n)
        dst[i] = '\0';
    return dst;
}

int             ft_wordcount(const char *s, char delimiter) {

    int     i;
    int     count;

    i = 0;
    count = 0;
    while(s[i] != '\0') {
        while(s[i] == delimiter)
            i++;
        if(s[i] != '\0')
            count++;
        while(s[i] != '\0' && s[i] != delimiter)
            i++;
    }
    return count;
}