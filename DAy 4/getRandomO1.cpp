#include<bits/stdc++.h>
using namespace std;

class RandomizedSet {
    unordered_map<int, int> mp;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.end() == mp.find(val))
        {
            mp[val] = 1;
            return true;
        }
        else
            return false;
    }
    
    bool remove(int val) {
        if (mp.find(val) == mp.end())
            return false;
        else
        {
            mp.erase(val);
            return true;
        }
            
        
    }
    
    int getRandom() {
        int n = rand() % mp.size();
        auto it = next(mp.begin(), n);
        return it->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */