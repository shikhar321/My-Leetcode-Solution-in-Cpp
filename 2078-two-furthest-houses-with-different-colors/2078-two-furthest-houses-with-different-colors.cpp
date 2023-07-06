class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxi = INT_MIN;
        for(int i = 0; i<colors.size(); i++) {
            for(int j = i; j<colors.size(); j++) {
                if(colors[i] != colors[j]) {
                    maxi = max(maxi, j-i);
                }
            }
        }
        return maxi;
    }
};