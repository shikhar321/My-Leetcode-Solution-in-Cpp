class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        // 4257
        // 0123
        // ij
        int i = 0;
        int j = 1;
        while(j<nums.size() && i<nums.size()) {
            if(nums[i]%2 != 0 && nums[j]%2 == 0) {  // odd even
                swap(nums[i], nums[j]);
                i += 2;
                j += 2;
            }
            else if(nums[i]%2 == 0 && nums[j]%2 == 0) { //even even
                i += 2;
            }
            else if(nums[i]%2 != 0 && nums[j]%2 != 0) {    // odd odd
                j += 2;
            }
            else{   // even odd
                i+=2;
                j+=2;
            }
        }
        return nums;
    }
};