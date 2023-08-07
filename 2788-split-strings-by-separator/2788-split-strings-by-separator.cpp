class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> answer;
        for(int i = 0; i<words.size(); i++) {
            string temp = "";
            for(int j = 0; j<words[i].size(); j++) {
                if(words[i][j] != separator) {
                    temp += words[i][j];
                }
                else{
                    if(temp.size() == 0)    temp = "";
                    else{
                    answer.push_back(temp);
                    temp = "";
                    }
                }
            }
            if(temp.size() != 0)    answer.push_back(temp);
        }
        return answer;
    }
};