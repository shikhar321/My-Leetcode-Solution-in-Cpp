class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int maxi = INT_MIN;
        int ans;
        for(int i = 0; i<grid.size(); i++) {
            int temp = 0;
            for(int j = 0; j<grid[i].size(); j++) {
                if(grid[i][j] == 1)
                    temp++;
            }
            if(temp > maxi) {
                ans = i;
                maxi = temp;
            }
        }
        return ans;
    }
};