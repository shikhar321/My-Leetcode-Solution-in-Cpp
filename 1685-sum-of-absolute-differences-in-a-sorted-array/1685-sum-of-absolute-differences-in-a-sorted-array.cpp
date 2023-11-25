class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int sum = 0;
        int size = nums.size();
        for(int i = 0; i<size; i++)
            sum += nums[i];
        vector<int> ans;
        int s = 0;
        for(int i = 0; i<size; i++) {
            sum -= nums[i];
            ans.push_back((sum - (size - i - 1) * nums[i]) + (i * nums[i] - s));
            s += nums[i];
        }
        return ans;
    }
};