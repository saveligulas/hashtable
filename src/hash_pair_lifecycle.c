#include "hash_table.h"
#include "hash_table_internal.h"

extern HashPair_t* hash_table_pair_create(void* key, size_t key_length, void* value, size_t value_length) {
    size_t hash_pair_offset = key_length;

    HashPair_t* hash_pair = malloc(sizeof(HashPair_t));

    void* key_copy = malloc(key_length);
    memcpy(key_copy, key, key_length);
    void* value_copy = malloc(value_length);
    memcpy(value_copy, value, value_length);

    hash_pair->key = key_copy;
    hash_pair->value = value_copy;

    return hash_pair;
}
