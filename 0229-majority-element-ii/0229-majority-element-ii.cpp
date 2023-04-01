class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int, int> mp;
        int size = nums.size();
        for(int i = 0; i<size; i++) {
            mp[nums[i]]++;
        }
        
        for(auto it : mp) {
            if(it.second > size/3)  {
                answer.push_back(it.first);
            }
        }
        return answer;
    }
};