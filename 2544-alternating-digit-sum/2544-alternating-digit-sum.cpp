class Solution {
public:
    int alternateDigitSum(int n) {
        int answer = 0;
        int sign = 1;
        string s = to_string(n);
        reverse(s.begin(), s.end());
        for(int i = s.size() - 1; i>=0; i--) {
            answer += (s[i] - '0')*sign;
            sign *=-1;
        }
        return answer;
    }
};