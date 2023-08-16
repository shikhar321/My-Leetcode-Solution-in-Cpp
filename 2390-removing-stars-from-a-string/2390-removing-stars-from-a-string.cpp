class Solution {
public:
    string removeStars(string s) {
        if(s.size() == 1){
            if(s[0] =='*')
                s = "";
            return s;
        }
        stack<char> st;
        int i = 0;
        while(i<s.size()) {
            if(st.size() == 0){
                if(s[i] == '*')
                    i++;
                else{
                    st.push(s[i]);
                    i++;
                }
            }
            else{
                if(st.top() != '*' && s[i] == '*') {
                    st.pop();
                    i++;
                }
                else if(st.top() == '*' && s[i] == '*' || st.top() != '*' && s[i] != '*'){
                    st.push(s[i]);
                    i++;
                }
                else{
                    st.pop();
                    i++;
                }
            }
        }
        s = "";
        while(st.size() != 0){
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};