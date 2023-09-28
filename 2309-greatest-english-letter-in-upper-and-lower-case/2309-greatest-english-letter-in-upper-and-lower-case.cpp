class Solution {
public:
    string greatestLetter(string s) {
      // small characters
        unordered_map<int, int> mp;
        // a = 97
        // A = 65
        for(int i = 0; i<s.size(); i++) {
          if(s[i] >= 'a' && s[i] <= 'z') {
            mp[s[i]-'a']++;
          }
        }
        int maxi = INT_MIN;
        for(int i = 0; i<s.size(); i++) {
          if(s[i] >= 'A' && s[i] <= 'Z') {
            if(mp.find(s[i]-'A') != mp.end()) {
              cout<<"hi";
              maxi = max(maxi, s[i]-'A');
            }
          }
        }
        if(maxi == INT_MIN)
          return "";
        char temp = char ('A' + maxi);
        s = "";
        s += temp;
        return s;
    }
};