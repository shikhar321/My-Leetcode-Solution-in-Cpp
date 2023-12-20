class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int i = 0;
        while(i<words.size()){
            int j = 0;
            while(j<words[i].size()){
                if(words[i][j] == x) {
                    ans.push_back(i);
                    break;
            }
                j++;
            }
            i++;
        }
        return ans;
    }
};