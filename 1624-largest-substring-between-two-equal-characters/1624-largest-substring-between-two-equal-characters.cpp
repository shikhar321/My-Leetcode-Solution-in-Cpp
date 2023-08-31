class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxi = -1;
        for(int i = 0; i<s.size(); i++) {
            string temp = "";
            for(int j = i; j<s.size(); j++) {
                temp += s[j];
                if(temp[0] == temp[temp.size()-1]){
                    int temp_size = temp.size()-2;
                    maxi = max(maxi, temp_size);
                }
            }
        }
        return maxi;
    }
};