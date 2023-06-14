class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        unordered_map<char, int> mp;
        for(int i = 0; i<s.size(); i++) {
            if(mp.find(s[i]) == mp.end())   mp.insert({s[i], i});
            else {
                mp[s[i]] -= (i - 1);
                mp[s[i]] *= -1;
                if(distance[s[i] - 'a'] != mp[s[i]])    return false;
            }
        }
        return true;
    }
};