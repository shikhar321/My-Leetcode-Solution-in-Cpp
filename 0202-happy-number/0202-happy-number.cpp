class Solution {
public:
    long long int check = 0;
    long long int ans = pow(2, 5);
    bool helper(int n) {
        if(check == ans) return false;
        if(n == 1) {
            return true;
        }
        int temp = n;
        n = 0;
        while(temp != 0) {
            n += (temp%10) * (temp%10);
            temp /= 10;
        }
        check++;
        return helper(n);
    }
    bool isHappy(int n) {
        
        return helper(n);
    }
};