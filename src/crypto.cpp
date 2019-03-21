#include <eosio-xt/crypto.hpp>
#include "fast-hash/fasthash.h"
#include "xxHash/xxh3.h"

uint32_t eosio::fasthash32(const char* data, uint32_t length, uint32_t seed) {
   return ::fasthash32(data, length, seed);
}

uint64_t eosio::fasthash64(const char* data, uint32_t length, uint64_t seed) {
   return ::fasthash64(data, length, seed);
}

uint64_t eosio::xxh3_64(const char* data, uint32_t length, uint64_t seed) {
   return ::XXH3_64bits_withSeed(data, length, seed);
}
