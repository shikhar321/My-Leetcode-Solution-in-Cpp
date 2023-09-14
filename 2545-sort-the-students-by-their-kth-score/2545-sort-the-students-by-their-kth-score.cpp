class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> ans;
        map<int, int, greater<int>> mp;
        for(int i = 0; i<score.size(); i++) {
            mp.insert({score[i][k], i});
        }
        for(auto it: mp) {
            // cout<<it.first<<" "<<it.second<<endl;
            ans.push_back(score[it.second]);
        }
        return ans;
    }
};