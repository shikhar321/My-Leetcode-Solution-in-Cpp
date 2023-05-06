class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        
        for(int i = left; i<=right; i++) {
            bool flag = false;
            int temp = i;
            while(temp != 0) {
                int r = temp % 10;
                if(r == 0 || i % r != 0){
                    flag = true;
                }
                temp /= 10;
            }
            if(flag == false) {
                answer.push_back(i);
            }
        }
        return answer;
    }
};