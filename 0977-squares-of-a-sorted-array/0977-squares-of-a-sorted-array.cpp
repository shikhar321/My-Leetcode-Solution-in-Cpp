class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int i = 0;
        int j = nums.size() - 1;
        int k = nums.size() - 1;
        // [-7,-3,2,3,11]   [0,9,9,49,121]
        //  k     ij
        //  
        while(i<=j) {
            if(abs(nums[i]) <= abs(nums[j])) {
                ans[k] = nums[j]*nums[j];
                j--;
                k--;
            }
            else {
                ans[k] = nums[i]*nums[i];
                i++;
                k--;
            }
        }
        return ans;
    }
};