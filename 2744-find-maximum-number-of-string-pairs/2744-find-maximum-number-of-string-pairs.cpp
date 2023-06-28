class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> mp;
        int count = 0;
        for(int i = 0; i<words.size(); i++) {
            string temp = "";
            for(int j = 0; j<words[i].size(); j++) {
                temp += words[i][j];
            }
            string reversedstring = temp;
            reverse(reversedstring.begin(), reversedstring.end());
            if(mp.find(reversedstring) != mp.end()) {
                count++;
            }
            mp[temp]++;
        }
        return count;
    }
};