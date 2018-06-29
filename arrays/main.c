#include "ft_int_array.c"

#define SIZE 20

int     main(void) {
    int arr[SIZE];

    init_array(arr, SIZE, 48, 50);
    display_array(arr, SIZE);
    return 0;
}