#ifndef _ALGO_
#define _ALGO_
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

int binary_search(int *array, size_t size, int value);
int binary_search_rec(int *array, int left, int right, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
#endif /*_ALGO_*/