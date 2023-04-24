class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int increment;
        for(int i = 0; i<nums.size();) {
            if(nums[i]>=10) {
                int check = nums[i];
                increment = 1;
                nums[i] = check%10;
                check /= 10;
                while(check != 0) {
                    nums.insert(nums.begin() + i, check%10);
                    check /= 10;
                    increment++;
                }
            }
            else if(nums[i]<10) {
                increment = 1;
            }
            i += increment;
        }
        return nums;
    }
};