#ifndef HASH_TABLE_INTERNAL
#define HASH_TABLE_INTERNAL

#include "hash_table.h"

struct HashPair {
    void* key;
    size_t key_length;
    void* value;
    size_t value_length;
};

struct HashTable {
    HashPair_t** data;
    size_t capacity;
};

#endif HASH_TABLE_INTERNAL