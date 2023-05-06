class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        for(int i = 0; i<nums.size(); i++) {
            if(maxi < nums[i]) {
                maxi = nums[i];
            }
        }
        return maxi*k + (((k-1)*k)/2);
    }
};