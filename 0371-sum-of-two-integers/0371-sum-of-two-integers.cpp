class Solution {
public:
    int getSum(int a, int b) {
        // y = a + b
        // e^y = e^(a+b)
        // e^y = e^a . e^b
        // y = log(e^a.e^b)
        if(a == 0)
            return b;
        else if(b == 0)
            return a;
        return log(exp(a)*exp(b));
    }
};