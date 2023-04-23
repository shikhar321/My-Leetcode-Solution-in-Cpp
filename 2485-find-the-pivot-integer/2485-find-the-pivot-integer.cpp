class Solution {
public:
    int pivotInteger(int n) {
        // 1 2 3 4  5  6  7  8

        // 0 1 2 3  4  5  6  7     // Index
        // 1 3 6 10 15 21 28 36    // prefix sum
        if(n == 1) {
            return 1;
        }
        vector<int> prefixsum (n);
        for(int i = 0; i<n; i++) {
            prefixsum[i] = (i+1)*(i+2)/2;
        }
        for(int i = 1; i<n; i++) {
            if(prefixsum[n-1] - prefixsum[i] == prefixsum[i-1]) {
                return i+1;
            }
        }
        return -1;
    }
};