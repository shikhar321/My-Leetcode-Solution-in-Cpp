class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;
        int ans = 0;
        for(int i = 0; i<chars.size(); i++) {
            mp[chars[i]]++;
        }
        for(int i = 0; i<words.size(); i++) {
            unordered_map<char, int> temp;
            bool flag = true;
            for(int j = 0; j<words[i].size(); j++) {
                temp[words[i][j]]++;
            }
            for(auto it: temp) {
                if(mp[it.first]  < it.second || mp.find(it.first) == mp.end())
                    flag = false;
            }
            if(flag == true)
                ans += words[i].size();
        }
        return ans;
    }
};