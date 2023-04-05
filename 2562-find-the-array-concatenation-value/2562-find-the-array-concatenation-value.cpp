class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        long long int intans = 0;
        if(nums.size() == 1 || nums.size()%2 != 0) {
            intans = nums[nums.size()/2];
        }
        while(i<j){
            string answer = "";
            answer += to_string(nums[i]);
            answer += to_string(nums[j]);
            intans += stoi(answer);
            i++;
            j--;
        }

        return intans;
    }
};