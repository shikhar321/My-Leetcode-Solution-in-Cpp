class Solution {
public:
    int countEven(int num) {
        int digitsum = 0;
        int check = num;
        while(check!=0) {
            digitsum += check%10;
            check /= 10;
        }
        if(digitsum%2 == 0) {
            return num/2;
        }
        else{
            return (num-1)/2;
        }
        return 0;
    }
};