class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = INT_MIN;
        for(int i = 0; i<nums.size(); i++) {
            if(mp.find(nums[i]*-1) != mp.end()) {
                cout<<nums[i]<<endl;
                if(nums[i] > 0) {
                    cout<<"if";
                    maxi = max(nums[i], maxi);
                }
                else    {
                    cout<<"else";
                    maxi = max(nums[i]*-1, maxi);
                }
            }
            mp[nums[i]]++;
        }
        if(maxi == INT_MIN) return -1;
        return maxi;
    }
};