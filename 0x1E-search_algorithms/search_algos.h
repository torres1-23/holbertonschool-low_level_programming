#ifndef _SEARCH_ALG_H_
#define _SEARCH_ALG_H_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_exp(int *array, int low, int high, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_search_rec(int *array, size_t low, size_t high, int value);

#endif /* _SEARCH_ALG_H_ */
