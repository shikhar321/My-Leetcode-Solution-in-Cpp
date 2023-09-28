class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        while(i<j) {
            // odd start        even end
            if(nums[i] % 2 != 0 && nums[j] % 2 == 0) {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            // even start       odd end
            else if(nums[i] % 2 == 0 && nums[j] % 2 != 0) {
                i++;
                j--;
            }
            // even start       even end
            else if(nums[i] % 2 == 0 && nums[j] % 2 == 0) {
                i++;
            }
            // odd start        odd end
            else if(nums[i] % 2 != 0 && nums[j] % 2 != 0) {
                j--;
            }
        }
        return nums;
    }
};