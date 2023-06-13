class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;
        int count = 0;
        for(int i = 0; i<grid.size(); i++) {
            mp[grid[i]]++;
        }
        for(int i = 0; i<grid.size(); i++) {
            vector<int> temp;
            for(int j = 0; j<grid[i].size(); j++) {
                temp.push_back(grid[j][i]);
            }
            if(mp.find(temp) != mp.end())   count += mp[temp];
        }
        // i j
        // 0 0
        // 1 0
        // 2 0
        return count;
    }
};