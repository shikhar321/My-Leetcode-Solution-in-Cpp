class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if(words.size() != s.size())
            return false;
        int i = 0;
        while(i<s.size()) {
            if(words[i][0] != s[i])
                return false;
            i++;
        }
        return true;
    }
};