class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans;
        for(int i = 0; i<letters.size(); i++) {
            if(letters[i] > target) {
                ans = letters[i];
                break;
            }
            else{
                ans = letters[0];
            }
        }
        return ans;
    }
};