class Solution {
public:
    int minOperations(vector<int>& nums) {
        // 1 5 2 4 1
        // 1 5 6 7 8

        // 1 5 2 4 9
        // 1 5 6 7 10

        // 9 5  2  4  8
        // 9 10 11 12 13
        int max = 0;
        int answer = 0;
        for(int i = 0; i<nums.size() - 1; i++) {
            if(nums[i] >= nums[i+1]) {
                max = nums[i] + 1;
                answer += max - nums[i+1];
                nums[i+1] = max;
            }
            // else if(nums[i] == nums[i+1]) {
            //     max = nums[i] + 1;
            //     answer += max - nums[i+1] + 1;
            // }
        }
        return answer;
    }
};