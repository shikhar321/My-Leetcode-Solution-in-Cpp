class SmallestInfiniteSet {
public:
    map<int, int> mp;
    
    SmallestInfiniteSet() {
        for(int i = 1; i<=1000; i++) {
            mp[i] = i;
        }
    }
    
    int popSmallest() {
        auto it = mp.begin();

        int ans = it->first;
        mp.erase(ans);
        return ans;
    }
    
    void addBack(int num) {
        if(mp.find(num) == mp.end()) {
            mp[num] = num;
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */