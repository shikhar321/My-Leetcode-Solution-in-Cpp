class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string r1 = "qwertyuiopQWERTYIOP";
        string r2 = "asdfghjklASDFGHJKL";
        string r3 = "zxcvbnmZXCVBNM";
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        unordered_map<char, int> mp3;
        for(auto it:r1)
            mp1[it]++;
        for(auto it:r2)
            mp2[it]++;
        for(auto it:r3)
            mp3[it]++;
        for(int i = 0; i<words.size(); i++) {
            string temp = "";
            bool f1 = false,f2 = false,f3 = false;
            for(int j = 0; j<words[i].size(); j++) {
                temp += words[i][j];
                if(mp1.find(words[i][j]) != mp1.end())
                    f1 = true;
                if(mp2.find(words[i][j]) != mp2.end())
                    f2 = true;
                if(mp3.find(words[i][j]) != mp3.end())
                    f3 = true;
            }
            if((f1 == true && f2 == false && f3 == false) || (f1 == false && f2 == true && f3 == false) || (f1 == false && f2 == false && f3 == true))
                ans.push_back(temp);
        }
        return ans;
    }
};