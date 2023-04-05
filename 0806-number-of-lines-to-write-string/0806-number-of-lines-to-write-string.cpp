class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> answer;
        int sum = 0;
        int line = 1;

        for(int i = 0; i<s.size(); i++) {
            sum += widths[s[i] - 'a'];
            if(sum>100){
                i--;
                sum = 0;
                line++;
            }
        }
        answer.push_back(line);
        answer.push_back(sum);
        return answer;
    }
};