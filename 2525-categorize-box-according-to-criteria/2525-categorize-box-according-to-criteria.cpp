class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        string answer = "";
        if(length >= 10000 || width >= 10000 || height >= 10000 || (long long int) (length * width) >= (long long int) (1000000000/height)) {
            answer += "Bulky";
        }
        if(mass >= 100)     answer += "Heavy";
        if(answer == "BulkyHeavy")  return "Both";
        if(answer == "Bulky")   return "Bulky";
        if(answer == "")        return "Neither";
        if(answer == "Heavy")   return "Heavy";
        return answer;
    }
};