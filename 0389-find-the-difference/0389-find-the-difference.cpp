class Solution {
public:
    char findTheDifference(string s, string t) {
        string add = "";
        add = s+t;
        char check = 0;
        for(int i = 0; i<add.size(); i++) {
            check ^= add[i];
        }
        return check;
    }
};