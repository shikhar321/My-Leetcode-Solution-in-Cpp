class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int, int> mp;
        for(int i = 0; i<magazine.size(); i++) {
            mp[magazine[i]]++;
        }
        for(int i = 0; i<ransomNote.size(); i++) {
            if(mp.find(ransomNote[i]) == mp.end() || mp[ransomNote[i]] == 0) {
                return false;
            }
            else{
                mp[ransomNote[i]]--;
            }
        }
        return true;
    }
};