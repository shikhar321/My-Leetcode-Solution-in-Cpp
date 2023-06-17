class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int start1 = 0, end1 = mat[0].size() - 1, start2 = 0, end2 = mat[0].size() - 1;
        int flag = 0;
        if(end1 % 2 == 0)   flag += mat[end1/2][end1/2];
        int i = 0;
        int j = mat.size() - 1;
        int finalans = 0;
        while(i<j) {
            // finalans += mat[i][start1]; 
            // finalans += mat[i][end1];
            // finalans += mat[j][start2];
            // finalans += mat[j][end2];
            finalans += mat[i][start1] + mat[i][end1] + mat[j][start2] + mat[j][end2];
            i++;
            j--;
            start1++;
            end1--;
            start2++;
            end2--;
        }
        return finalans+flag;
    }
};