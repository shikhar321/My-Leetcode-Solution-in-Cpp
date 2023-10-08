class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)
            return 1;
        long long int i = 1;
        int ans = 0;
        while(n != 0) {
            if(n%2 == 0)
                ans += i;
            i *= 2;
            n /= 2;
        }
        return ans;
    }
};