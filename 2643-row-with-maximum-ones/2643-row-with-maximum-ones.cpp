class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int index = 0;
        int count = 0;
        int maxi = INT_MIN;
        for(int i = 0; i<mat.size(); i++) {
            count = 0;
            for(int j = 0; j<mat[i].size(); j++) {
                if(mat[i][j] == 1)  count++;
                // cout<<count<<endl;
            }
            if(maxi < count)    index = i;
            maxi = max(maxi, count);
            cout<<maxi<<endl;
        }
        return {index, maxi};
    }
};