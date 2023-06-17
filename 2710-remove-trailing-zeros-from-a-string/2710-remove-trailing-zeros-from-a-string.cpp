class Solution {
public:
    string removeTrailingZeros(string num) {
        int size = num.size() - 1;
        int i = size;
        while(i>=0) {
            if(num[i] == '0') {
                num.erase(num.begin() + i, num.begin() + i+1);
                i--;
            }
            else break;
        }
        return num;
    }
};