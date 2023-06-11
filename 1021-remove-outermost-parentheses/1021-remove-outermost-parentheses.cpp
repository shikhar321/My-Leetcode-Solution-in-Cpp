class Solution {
public:
    string removeOuterParentheses(string s) {
        // Increase count by 1 if '('
        // Decrease count by 1 if ')'
        // if there is ( and +1 delete
        // if there is ) and 0 delete
        int count = 0;
        string ans = "";
        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '(') count++;
            if(s[i] == ')') count--;
            if(!((s[i] == '(' && count == 1) || (s[i] == ')' && count == 0))){
                ans += s[i];
            }
        }
        return ans;
    }
};