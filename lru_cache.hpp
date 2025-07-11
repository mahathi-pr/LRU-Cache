#ifndef LRU_CACHE_HPP
#define LRU_CACHE_HPP

#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

class LRUCache {
private:
    int capacity;
    list<int> usageOrder;
    unordered_map<int, pair<int, list<int>::iterator>> cache;

public:
    LRUCache(int cap) : capacity(cap) {}

    int get(int key) {
        if (cache.find(key) == cache.end()) return -1;
        usageOrder.erase(cache[key].second);
        usageOrder.push_front(key);
        cache[key].second = usageOrder.begin();
        return cache[key].first;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            usageOrder.erase(cache[key].second);
        } else if (usageOrder.size() >= capacity) {
            int leastUsedKey = usageOrder.back();
            usageOrder.pop_back();
            cache.erase(leastUsedKey);
        }
        usageOrder.push_front(key);
        cache[key] = {value, usageOrder.begin()};
    }

    void display() const {
        cout << "Current Cache State (Most -> Least Recent): ";
        for (int key : usageOrder) {
            cout << "[" << key << ":" << cache.at(key).first << "] ";
        }
        cout << "\n";
    }
};

#endif // LRU_CACHE_HPP
