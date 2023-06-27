class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer;
        int i = 0;
        int j = numbers.size() - 1;
        while(i<j) {
            if(target == numbers[i] + numbers[j]){
                answer.push_back(i+1);
                answer.push_back(j+1);
                break;
            }
            else if(target < numbers[i] + numbers[j]) {
                j--;
            }
            else {
                i++;
            }
        }
        return answer;
    }
};