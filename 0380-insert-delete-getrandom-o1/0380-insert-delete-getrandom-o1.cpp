class RandomizedSet {
public:
    unordered_map<int, int> ump;
    vector<int> v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(ump.count(val))
            return false;
        v.push_back(val);
        ump[val] = v.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if(ump.count(val))
        {
            int idx = ump[val];
            int last_val = v.back();
            v[idx] = last_val;
            v.pop_back();
            ump[last_val] = idx;
            ump.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int rand_idx = rand() % v.size();
        
        return v[rand_idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

