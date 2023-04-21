class Solution {
public:
    int sumBase(int n, int k) {
        // Divide the number by base repeatedly
        int ans = 0;
        while(n != 0) {
            ans += n%k;
            n /= k;
        }
        return ans;
    }
};