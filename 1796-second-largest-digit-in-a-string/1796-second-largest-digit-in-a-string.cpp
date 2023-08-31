class Solution {
public:
    int secondHighest(string s) {
        int maxi = -1;
        int secmaxi = -1;
        for(int i = 0; i<s.size(); i++) {
            if(s[i] >= '0' && s[i] <= '9') {
                int temp = s[i] - '0';
                if(temp > maxi) {
                    secmaxi = maxi;
                    maxi = temp;
                }
                if(temp < maxi) {
                    if(temp > secmaxi)
                        secmaxi = temp;
                }
            }
        }
        return secmaxi;
    }
};