class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int first = 0, second = 0;
        vector<int> answer;
        for(int i = 0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(auto it: mp) {
            if(it.second%2 == 0) {
                first += it.second/2;
            }
            else{
                first += it.second / 2;
                second += it.second % 2;
            }
        }
        answer.push_back(first);
        answer.push_back(second);
        return answer;
    }
};