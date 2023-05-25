class Solution {
public:
    int minSteps(string s, string t) {
        int answer = 0;
        unordered_map<char, int> mp;
        for(int i = 0; i<s.size(); i++) {
            mp[s[i]]++;
        }
        for(int i = 0; i<t.size(); i++) {
            mp[t[i]]--;
        }
        for(auto it : mp) {
            if(it.second > 0)
            answer += it.second;
        }
        return answer;
    }
};