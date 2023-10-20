class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i<nums.size(); i++) {
            string temp = to_string(nums[i]);
            s.insert(nums[i]);
            reverse(temp.begin(), temp.end());
            int temp2 = stoi(temp, 0);
            s.insert(temp2);
        }
        for(auto it: s) {
            cout<<it<<" ";
        }
        return s.size();
    }
};