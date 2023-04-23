class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        // 2 3 -1 8 4
        // 2 5 4  12 16

        // 1 -1 4
        // 1 0 4

        // 1 2 -2
        // 1 3 1

        for(int i = 0; i<nums.size()-1; i++) {
            nums[i+1] += nums[i];
        }
        for(int i = 0; i<nums.size(); i++) {
            if((i == 0 && nums[nums.size()-1] - nums[i] == 0) ||(i>0 && nums[nums.size() - 1] - nums[i] == nums[i-1])) {
                return i;
            }

        }
        return -1;
    }
};