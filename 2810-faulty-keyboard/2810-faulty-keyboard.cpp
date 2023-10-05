class Solution {
public:
    string finalString(string s) {
        int i = 0;
        string temp = "";
        while(i<s.size()) {
            if(s[i] != 'i')
                temp += s[i];
            else{
                int start = 0;
                int end = temp.size() - 1;
                while(start<end) {
                    swap(temp[start], temp[end]);
                    start++;
                    end--;
                }
            }
            i++;
        }
        return temp;
    }
};