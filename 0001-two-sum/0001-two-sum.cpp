class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++) {
            if(mp.find(target - nums[i]) != mp.end()) {
                answer.push_back(mp[target - nums[i]]);
                answer.push_back(i);
            }
            else{
                mp.insert({nums[i], i});
            }
        }
        return answer;
    }
};