class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // 2 3 4 4 5 6
        sort(nums.begin(), nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int current;
        int maxi = 0;
        while(i<j) {
            current = nums[i] + nums[j];
            maxi = max(current, maxi);
            i++;
            j--;
        }
        return maxi;
    }
};