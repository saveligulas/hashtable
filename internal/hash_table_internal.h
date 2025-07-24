#ifndef HASH_TABLE_INTERNAL
#define HASH_TABLE_INTERNAL

#include "hash_table.h"

struct HashPair {
    void* key;
    void* value;
};

struct HashTable {
    HashPair_t** data;
    size_t capacity;
};

#endif HASH_TABLE_INTERNAL