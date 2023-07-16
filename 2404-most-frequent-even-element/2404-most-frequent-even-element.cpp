class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = INT_MIN;
        int ans = INT_MAX;
        for(int i = 0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        for(auto it:mp) {
            cout<<it.first<<":"<<it.second<<endl;
        }
        for(auto it: mp) {
            if(it.first % 2 ==0) {
                if(maxi < it.second) {
                    ans = it.first;
                    maxi = it.second;
                }
                else if(maxi == it.second) {
                    ans = min(ans, it.first);
                }
            }
        }
        if(ans == INT_MAX)  return -1;
        return ans;
    }
};