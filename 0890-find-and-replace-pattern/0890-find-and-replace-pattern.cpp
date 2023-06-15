class Solution {
public:
    bool helper(string s, string pattern) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
            for(int i = 0; i<s.size(); i++) {
                if(mp1.find(s[i]) == mp1.end() && mp2.find(pattern[i]) == mp2.end()) {
                    mp1.insert({s[i], pattern[i]});
                    mp2.insert({pattern[i], s[i]});
                }
                else{
                    if(mp1[s[i]] != pattern[i] || mp2[pattern[i]] != s[i])   return false;
                }
            }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> answer;
        for(int i = 0; i<words.size(); i++) {
            if(helper(words[i], pattern) == true) {
            answer.push_back(words[i]);
            }
        }
        return answer;
    }
};