#ifndef HASH_TABLE
#define HASH_TABLE

#include <stddef.h>
#include <stdlib.h>

typedef struct HashTable HashTable_t;
typedef struct HashPair HashPair_t;

extern HashTable_t* hash_table_create(int initialCapacity);
extern HashPair_t* hash_table_pair_create(void* key, size_t key_length, void* value, size_t value_length);
extern void hash_table_insert(HashTable_t* table, HashPair_t pair);

#endif HASH_TABLE
