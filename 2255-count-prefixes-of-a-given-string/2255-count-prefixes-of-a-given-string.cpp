class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string, int> mp;
        for(int i = 0; i<s.size(); i++) {
            string temp = "";
            for(int j = 0; j<s.size(); j++) {
                temp += s[j];
                cout<<temp<<" ";
                mp[temp]++;
            }
        }
        int ans = 0;
        for(int i = 0; i<words.size(); i++) {
            if(mp.find(words[i]) != mp.end())
                ans++;
        }
        return ans;
    }
};