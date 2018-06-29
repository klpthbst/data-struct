#include "ft_int_array.h"


void    read_array(int my_array[], int size) {
    for(int i = 0; i < size; ++i) {
        scanf("%d", &my_array[i]);
    }
}

void    display_array(int my_array[], int size) {
    for(int i = 0; i < size; ++i) {
        printf("%d ", my_array[i]);
    }
    printf("\n");
}

void    init_array(int my_array[], int size, int min, int max) {
    time_t t = 0;

    srand((unsigned) time(&t));
    for(int i = 0; i < size; ++i ) {
        my_array[i] = (rand() % (max - min)) + min;
    }
}