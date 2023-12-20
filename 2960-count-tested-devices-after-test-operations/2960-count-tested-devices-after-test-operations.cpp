class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        int ans = 0;
        for(int i = 0; i<bp.size(); i++) {
            if(bp[i]-ans > 0)
                ans++;
        }
        return ans;
    }
};