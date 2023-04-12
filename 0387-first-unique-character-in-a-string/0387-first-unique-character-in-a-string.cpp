class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<int,int>> mp;
        // In this map char stores the character of string
        // First int of pair stores count
        // Second int of pair stores index
        int index = s.size();
        for(int i = 0; i<s.size(); i++) {
            mp[s[i]].first++;   // // First int of pair stores count
            mp[s[i]].second = i;
        }
        for(auto &[it, it2] : mp) { //it - char mai traverse kerne k liye
                                    //it2 - pair mai traverse kerne k liye
            if(it2.first == 1){
                index = min(index, it2.second);
            }
        }
        if(index == s.size()) {
            return -1;
        }
        return index;
    }
};