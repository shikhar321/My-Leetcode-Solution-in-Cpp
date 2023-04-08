class Solution {
public:
    char repeatedCharacter(string s) {
        char answer;
        unordered_map<char, int> mp;
        for(int i = 0; i<s.size(); i++) {
            if(mp.find(s[i]) != mp.end()) {
                answer = s[i];
                break;
            }
            else{
                mp[s[i]]++;
            }
        }
        return answer;
    }
};