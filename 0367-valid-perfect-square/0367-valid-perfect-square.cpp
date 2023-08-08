class Solution {
public:
    int helper(int num, int low, int high) {
        if(high >= low) {
            long long int mid = low + (high - low)/2;
            long long int to_find = mid*mid;
            if(to_find == num)
                return mid;
            else if(to_find > num)
                return helper(num, low, mid-1);
            else{
                return helper(num, mid+1, high);
            }
        }
        return -1;
    }
    bool isPerfectSquare(int num) {
        if(num == 1)    return true;
        int ans = helper(num, 1, num/2);
        if(ans != -1)   return true;
        return false;
    }
};