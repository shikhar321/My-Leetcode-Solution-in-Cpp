class Solution {
public:
    bool isvowel(char check) {
        if(check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u' || check == 'A' || check == 'E' || check == 'I' || check == 'O' || check == 'U') {
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        // i = vowel, j = vowel // dont check
        // i = vowel, j = not
        // i = not    j = vowel
        // i = not    j = not   // dont check
        while(i<j) {
            if(isvowel(s[i]) == false && isvowel(s[j]) == true) {
                i++;
            }
            else if(isvowel(s[i]) == true && isvowel(s[j]) == false) {
                j--;
            }
            else if(isvowel(s[i]) == true && isvowel(s[j]) == true && s[i] != s[j]){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};