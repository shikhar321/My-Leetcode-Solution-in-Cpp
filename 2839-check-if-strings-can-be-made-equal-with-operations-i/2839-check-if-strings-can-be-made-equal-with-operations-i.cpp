class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1 == s2)    return true;
        if(s1[0] != s2[0]){
            if(s1[0] != s2[2] || s1[2] != s2[0])
                return false;
            else {
                swap(s1[0], s1[2]);
            }
        }
        if(s1[1] != s2[1]) {
            if(s1[1] != s2[3] || s1[3] != s2[1])
                return false;
            else {
                swap(s1[1], s1[3]);
            }
        }
        return (s1[2] == s2[2] && s1[3] == s2[3]);
    }
};