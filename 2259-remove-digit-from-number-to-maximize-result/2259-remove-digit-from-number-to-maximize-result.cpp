class Solution {
public:
    string removeDigit(string number, char digit) {
        string answer;
        string maxi;
        for(long long int i = 0; i<number.size(); i++) {
            if(number[i] == digit) {
                string new1 = number;
                new1.erase(new1.begin() + i, new1.begin() + i + 1);
                maxi = max(new1, maxi);
            }
        }
        return maxi;
    }
};