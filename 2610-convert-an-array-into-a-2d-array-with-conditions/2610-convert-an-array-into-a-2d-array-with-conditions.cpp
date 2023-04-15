class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> answer;
        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        // while(true) means always code runs endlessly
        while(true) {
            vector<int> small;
            for(auto &it:mp) {
                if(it.second != 0) {
                    small.push_back(it.first);
                    mp[it.first]--;
                }
            }
            if(small.size() == 0)
                break;
            answer.push_back(small);
        }
        
        return answer;
    }
};