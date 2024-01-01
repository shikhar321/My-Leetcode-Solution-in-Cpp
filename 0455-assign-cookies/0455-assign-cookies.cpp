class Solution {
public:
// 7 8 9 10
// 5 6 7 8

    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int ans = 0;
        int i = 0;
        int j = 0;
        while(i<g.size() && j<s.size()) {
            if(g[i] <= s[j]){
                ans++;
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        return ans;
    }
};