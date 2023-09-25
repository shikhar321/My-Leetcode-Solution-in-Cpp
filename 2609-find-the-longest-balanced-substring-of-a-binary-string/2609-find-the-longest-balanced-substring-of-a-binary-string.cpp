class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int zero = 0;
        int ones = 0;
        int mini;
        int maxi = INT_MIN;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '0' && ones == 0)
                zero++;
            else if(s[i] == '1' && zero != 0)
                ones++;
            else if(s[i] == '0' && ones != '0') {
                mini = min(zero, ones);
                zero = 0;
                ones = 0;
                maxi = max(maxi, mini);
                zero++;
            }
        }
        mini = min(zero, ones);
        maxi = max(maxi, mini);
        return 2*maxi;
    }
};