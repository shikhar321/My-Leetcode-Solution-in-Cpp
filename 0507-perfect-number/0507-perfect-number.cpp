class Solution {
public:
    bool checkPerfectNumber(int num) {
        // 1 6 28
        // 12 = 1 2 3 4 6
        int ans = 0;
        for(int i = 1; i<=num/2; i++) {
            if(num%i == 0)
                ans += i;
        }
        return ans == num;
    }
};