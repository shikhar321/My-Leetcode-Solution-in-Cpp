class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int ans = 0;
        int size = nums.size();
        for(int i = 0; i<size; i++) {
            for(int j = i+1; j<size; j++) {
                if(nums[i] != nums[j]) {
                    for(int k = j+1; k<size; k++) {
                        if(nums[i] != nums[k] && nums[j] != nums[k])    ans++;
                    }
                }
            }
        }
        return ans;   
    }
};