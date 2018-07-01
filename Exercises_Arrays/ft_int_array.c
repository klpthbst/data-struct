#include "ft_int_array.h"


void    read_array(int my_array[], int size) {
    for(int i = 0; i < size; ++i) {
        scanf("%d", &my_array[i]);
    }
}

void    display_array(int my_array[], int size) {
    for(int i = 0; i < size; ++i) {
        printf("%4d ", my_array[i]);
    }
    printf("\n");
}

void    init_array(int my_array[], int size, int min, int max, long long seed) {
    srand(time(0) + seed);
    for(int i = 0; i < size; ++i ) {
        my_array[i] = rand() % (max + 1 - min) + min;
    }
}
