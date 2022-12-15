#include "hash_tables.h"

/**
 * key_index- the function returns an index for a hash fuction key
 *
 * @key: pointer to a char
 * @size: size of the array
 *
 * Return: returns the index generated
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
