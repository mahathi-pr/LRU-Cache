#include "lru_cache.hpp"

int main() {
    LRUCache cache(3);
    cache.put(1, 100);
    cache.put(2, 200);
    cache.put(3, 300);
    cache.display();

    cout << "Get key 2: " << cache.get(2) << "\n";
    cache.display();

    cache.put(4, 400);
    cache.display();

    cout << "Get key 1: " << cache.get(1) << "\n";
    return 0;
}
