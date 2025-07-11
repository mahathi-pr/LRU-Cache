#include "lru_cache.hpp"

void testLRU() {
    cout << "== Test Case 1 ==" << endl;
    LRUCache cache(3);
    cache.put(1, 100);
    cache.put(2, 200);
    cache.put(3, 300);
    cache.display();

    cout << "Get key 2: " << cache.get(2) << endl;
    cache.display();

    cache.put(4, 400);
    cache.display();

    cout << "Get key 1: " << cache.get(1) << endl;

    cout << "\n== Test Case 2 ==" << endl;
    LRUCache smallCache(2);
    smallCache.put(10, 1000);
    smallCache.put(20, 2000);
    smallCache.display();

    smallCache.get(10);
    smallCache.display();

    smallCache.put(30, 3000);
    smallCache.display();

    cout << "Get key 20: " << smallCache.get(20) << endl;
    cout << "Get key 30: " << smallCache.get(30) << endl;
}

int main() {
    testLRU();
    return 0;
}
