class Solution {
public:
    int firstUniqChar(string s) {
        int index = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i<s.size(); i++) {
            mp[s[i]]++;
        }
        for(int i = 0; i<s.size(); i++) {
            if(mp[s[i]] != 1){
                index++;
            }
            else{
                return index;
            }
        }
        return -1;
    }
};