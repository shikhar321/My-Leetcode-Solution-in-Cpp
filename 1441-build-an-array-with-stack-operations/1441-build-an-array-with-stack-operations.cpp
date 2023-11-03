class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int k = 0, i = 1;
        while(i<=n && k<target.size()) {
            if(target[k] == i) {
                ans.push_back("Push");
                k++;
                i++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
        }
        return ans;
    }
};