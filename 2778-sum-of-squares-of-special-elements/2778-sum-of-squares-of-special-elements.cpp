class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            if(size % (i+1) == 0) {
                int temp = nums[i]*nums[i];
                ans += temp;
            }
        }
        return ans;
    }
};