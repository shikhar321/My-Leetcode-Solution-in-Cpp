class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        int i = num.size() - 1;
        while(i>=0) {
            num[i] = num[i] + k%10 + carry;
            k /= 10;
            if(num[i] > 9) {
                num[i] -= 10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            i--;
        }
        i = num.size();
        if(k == 0 && carry == 1){
            num.insert(num.begin(), 1);
            return num;
        }
                // 9 7 4
            // 1 8 1 0 0
            while(k != 0) {
                int temp = k%10 + carry;
                if(temp > 9) {
                    temp -= 10;
                    carry = 1;
                }
                else{
                    carry = 0;
                }
                    num.insert(num.begin(), temp);
                k/=10;
            }
            if(carry)
                num.insert(num.begin(), carry);
        return num;
    }
};