class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c1 = -1, c2 = -1;
        for(int i = 0; i<s1.size(); i++) {
            if(s1[i] != s2[i]){
                if(c1 == -1 && c2 == -1) {
                    c1 = i;
                }
                else if(c1 != -1 && c2 == -1) {
                    c2 = i;
                }
                else if(c1 != -1 && c2 != -1) {
                    return false;
                }
            }
        }
        if(c1 == -1 && c2 == -1)    return true;
        if(c1 == -1 || c2 == -1)    return false;
        swap(s1[c1], s1[c2]);
        cout<<s1<<endl;
        cout<<s2<<endl;
        return s1 == s2;
    }
};