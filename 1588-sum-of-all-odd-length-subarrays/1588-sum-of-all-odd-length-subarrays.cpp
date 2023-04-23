class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& vec) {
        int sum = 0;
        int left, right, total, odd;
        for(int i=0;i<vec.size();i++) {
            // Logic given in leetcode file
            left = i + 1; // subarrays ending with vec[i];
            right = vec.size() - i; // subarrays starting with vec[i];
            total = left * right; // total times the vec[i] appears in all subarrays 
            odd = (total + 1) / 2; // no. of times vec[i] appears in odd length subarrays;
            sum += odd * vec[i]; // then we multiply it with vec[i] to get the sum of all vec[i] appearences in odd length subarrays
        }
        return sum;
    }
};