class Solution {
public:
    string generateTheString(int n) {
        string ans = "";

        if(n%2 != 0) {
            while(n--)
                ans += 'a';
        }
        else{
            int half = n/2;
            while(half--) {
                ans += 'a';
                ans += 'b';
            }
            if(n/2 % 2 == 0)
                ans[1] = 'a';
        }
        return ans;
    }
};