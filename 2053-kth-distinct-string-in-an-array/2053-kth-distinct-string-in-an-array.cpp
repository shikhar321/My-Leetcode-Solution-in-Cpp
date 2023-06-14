class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string ans = "";
        unordered_map<string, int> mp;
        int temp = 0;
        for(int i = 0; i<arr.size(); i++) {
            mp[arr[i]]++;
        }
        for(int i = 0; i<arr.size(); i++) {
            if(mp[arr[i]] == 1) {
                temp++;
                ans = arr[i];
                // cout<<ans<<endl;
                if(temp == k) {
                return ans;
            }
            }
        }
        return "";
    }
};