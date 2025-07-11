# LRU-Cache
This project implements an **LRU (Least Recently Used) Cache** in C++ using `unordered_map` and `list` to achieve constant-time `get` and `put` operations.

## Features
- O(1) access for `get()` and `put()` using hash map and doubly linked list.
- Custom eviction policy to remove least recently used keys.
- Modular class design with display and testing capabilities.
- Multiple test cases simulating real-world memory access patterns.

## Files
- `lru_cache.hpp`: Core LRU cache implementation.
- `main1.cpp`: Example usage of the cache.
- `test.cpp`: Validates correctness with test cases.

## Compile & Run
```bash
g++ test.cpp -o test && ./test
