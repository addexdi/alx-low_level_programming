#include "search_algos.h"
/**
* linear_search- searches a list using linear search algo
* @array: The array to search.
* @size: The size of the given array.
* @value: The data to search the array for.
* Return: returns the index of the value if found
* or -1 for no search results.
*/

int linear_search(int *array, size_t size, int value){

    int x= (int)size;
    if(array == NULL)
        return (-1);
        
    for(x = 0; x < (int)size - 1; x++){
        printf("Value checked array[%d] = [%d]\n", x, array[x]);
        if(value == array[x])
            return x;            
    }
    return -1;
}