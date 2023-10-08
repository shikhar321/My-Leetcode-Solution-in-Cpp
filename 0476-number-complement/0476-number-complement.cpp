class Solution {
public:
    int findComplement(int num) {
        long long int i = 1;
        int ans = 0;
        while(num != 0) {
            if(num%2 == 0){
                ans += i;
            }
            i *= 2;
            num /= 2;
        } 
        return ans;
    }
};