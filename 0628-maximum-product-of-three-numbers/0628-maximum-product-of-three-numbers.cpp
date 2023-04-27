class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // 2 smallest negative * 1 greatest positive
        // 3 greatest positive
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int max1 = nums[0]*nums[1]*nums[size-1];
        int max2 = nums[size-1]*nums[size-2]*nums[size-3];
        return max(max1,max2); 
    }
};