class Solution {
public:

    string convert(int n) {
        string temp = "";
        while(n!=0) {
            string a = to_string(n%2);
            temp += a;
            n /= 2;
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    int minBitFlips(int start, int goal) {
        int ans = 0;
        
        string s1 = convert(start);
        string s2 = convert(goal);
        int ssize = s1.size();
        int gsize = s2.size();
            if(ssize > gsize) {
                string temp = "";
                for(int i = 0; i<(ssize - gsize); i++) {
                    temp += '0';
                }
                s2 = temp + s2;
            }
            else{
                string temp = "";
                for(int i = 0; i<(gsize - ssize); i++) {
                    temp += '0';
                }
                s1 = temp + s1;
            }

        for(int i = 0; i<s1.size(); i++) {\
            if(s1[i] != s2[i])  ans++;
        }
        return ans;
    }
};