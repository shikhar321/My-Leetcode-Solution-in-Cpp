class Solution {
public:
    string freqAlphabets(string s) {
        string answer = "";
        int i = s.size()-1;
        char a = 'a';
        while(i>=0) {
            if(s[i] == '#') {
                answer += (char) a + (s[i-1] - '0') + ((s[i-2] - '0')*10) - 1;
                i -= 3;
            }
            else{
                answer += (char) a + (s[i] - '0') - 1;
                i--;
            }
        }
        reverse(answer.begin(), answer.end());
        return answer;
    }
};