#ifndef HASH_TABLE_INTERNAL
#define HASH_TABLE_INTERNAL

#include "hash_table.h"

struct HashPair {
    void* data;
    size_t value_offset;
};

struct HashTable {
    HashPair_t** data;
    size_t capacity;
};

#endif HASH_TABLE_INTERNAL