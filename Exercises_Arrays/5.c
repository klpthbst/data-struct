/*
5.  Write a program to compute the sum and mean of
the elements of a two-dimensional array.
*/

#include "ft_int_array.c"

#define SIZE 5
#define PRIME 20161

int     main(void) {
    int     array2D[SIZE][SIZE];
    int     sum;
    double  mean;

    /* 5 */
    for(int i = 0; i < SIZE; ++i) { //init array
        init_array(array2D[i], SIZE, 0, 10, PRIME * i);
    }

    sum = 0;
    mean = 0;
    for(int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            sum += array2D[i][j];
        }
    }
    mean = (double)sum / (SIZE * SIZE);
    printf("the sum is %4d\n", sum);
    printf("the mean is %4.2lf\n", mean);
    printf("***************\n");
    printf("***************\n");


    return 0;
}
