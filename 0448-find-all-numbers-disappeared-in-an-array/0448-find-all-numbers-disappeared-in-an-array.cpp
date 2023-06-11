class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> answer;
        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(int i = 0; i<nums.size(); i++) {
         if(mp.find(i+1) == mp.end()){
                answer.push_back(i+1);
            }   
        }
        return answer;
    }
};