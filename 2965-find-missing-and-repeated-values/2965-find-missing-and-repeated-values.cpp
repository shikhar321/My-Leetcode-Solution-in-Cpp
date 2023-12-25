class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = grid.size();
        int sizesquare = size*size;
        vector<int> v (sizesquare, 0);
        for(int i = 0; i<grid.size(); i++) {
            for(int j = 0; j<grid[i].size(); j++) {
                v[grid[i][j]-1]+=1;
            }
        }
        int a = 0, b = 0;
        for(int i = 0; i<v.size(); i++) {
            if(v[i] == 2)
                a = i+1;
            if(v[i] == 0)
                b = i+1;
        }
        return {a,b};
    }
};