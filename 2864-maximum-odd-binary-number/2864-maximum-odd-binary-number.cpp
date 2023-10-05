class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '1') {
                count++;
                s[i] = '0';
            }
        }
        if(count == 0)
            return s;
        if(count == 1) {
            s[s.size() - 1] = '1';
            return s;
        }
        else{
            s[s.size() - 1] = '1';
            count -= 1;
            int i = 0;
            while(count != 0) {
                s[i] = '1';
                count--;
                i++;
            }
        }
        return s;
    }
};