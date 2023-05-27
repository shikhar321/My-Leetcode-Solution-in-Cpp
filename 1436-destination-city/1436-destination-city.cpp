class Solution {
public:
    string helper(unordered_map<string, string> &mp, string &tofind) {
        if(mp.find(tofind) != mp.end()){
            return helper(mp, mp[tofind]);
        }
        return tofind;
    }
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> mp;
        for(int i = 0; i<paths.size(); i++) {
            mp.insert({paths[i][0], paths[i][1]});
        }
        return helper(mp, paths[0][1]);
    }
};