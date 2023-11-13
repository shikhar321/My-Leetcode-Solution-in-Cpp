class Solution {
public:
    bool helper(char t) {
        if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u' ||          t == 'A' || t == 'E' || t == 'I' || t == 'O' || t == 'U')
                return true;
        return false;
    }
    string sortVowels(string s) {
         string temp = "";
         vector<int> index;
         for(int i = 0; i<s.size(); i++) {
             if(helper(s[i]) == true) {
                 index.push_back(i);
                temp += s[i];
             }
         }
         sort(temp.begin(), temp.end());
         for(int i = 0; i<temp.size(); i++) {
             s[index[i]] = temp[i];
         }
         return s;
    }
};