class Solution {
public:
    bool isPowerOfTwo(int n) {
        //n = 16 | 10000
        //n-1 = 15 | 01111
        if(n == 0 || n == INT_MIN) {
            return false;
        }
        return (n & n-1) == 0;
    }
};