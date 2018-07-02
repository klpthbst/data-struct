#ifndef FT_INT_ARRAY_
#define FT_INT_ARRAY_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* read 1D array of size-elements from input
* using scanf()
*/
void    read_array(int my_array[], int size);

/*
* display 1D array of size-elemnts
* using printf()
*/
void    display_array(int my_array[], int size);

/*
* init  1D array with
* random numbers
* if function using more the ones - seed vaule must be different
*/
void    init_array(int my_array[], int size, int min, int max, long long int seed);

#endif
