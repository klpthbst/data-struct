/*
2.  Write a program that reads an array of 100
integers. Display all the pairs of elements whose
sum is 50.

3.	Write a program to interchange the second element
with the second last element.

4.	Write a program that calculates the sum of squares
of the elements.
*/
#include "ft_int_array.c"

#define SIZE 100
#define SIZE2 20
#define SUM 50

int     main(void) {
    int array2[SIZE];
    int array3_4[SIZE2];

    init_array(array2, SIZE, 10, 40, 0);
    init_array(array3_4, SIZE2, 0, 10, 0);

    /* 2 */
    for(int i = 0; i < SIZE; ++i) {
        for(int j = i + 1; j < SIZE; ++j) {
            if (array2[i] + array2[j] == SUM) {
                printf("%d + %d = %d\n", array2[i], array2[j], SUM);
                break;
            }
        }
    }
    printf("***************\n");
    printf("***************\n");

    /* 3 */
    display_array(array3_4, SIZE2);
    printf("before interchange\n");
    int temp;

    temp = array3_4[1];
    array3_4[1] = array3_4[SIZE2 - 2];
    array3_4[SIZE2 - 2] = temp;
    display_array(array3_4, SIZE2);
    printf("after interchange\n");
    printf("***************\n");
    printf("***************\n");

    /* 4 */
    long long int squares_sum;

    squares_sum = 0;
    for (int i = 0; i < SIZE2; ++i) {
        squares_sum += array3_4[i] * array3_4[i];
    }
    printf ("sum of squares of the elements\nsum = %lld\n", squares_sum);
    printf("***************\n");
    printf("***************\n");

    return 0;
}