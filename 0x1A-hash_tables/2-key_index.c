#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: they key for the index
 * @size: size of an array in hash table
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
