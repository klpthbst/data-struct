#ifndef FT_INT_ARRAY_
#define FT_INT_ARRAY_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* read size-elements from input
* using scanf()
*/
void    read_array(int my_array[], int size);

/*
* display array size-elemnts
* using printf()
*/
void    display_array(int my_array[], int size);

/*
* init array with
* random numbers
*/
void    init_array(int my_array[], int size, int min, int max, long long int seed);

#endif