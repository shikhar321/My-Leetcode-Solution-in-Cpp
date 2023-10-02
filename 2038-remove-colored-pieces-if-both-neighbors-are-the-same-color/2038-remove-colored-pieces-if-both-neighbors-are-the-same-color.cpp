class Solution {
public:
    bool winnerOfGame(string c) {
        int i = 0;
        int a = 0;
        int b = 0;
        if(c.size() <3)
            return false;
        while(i<c.size()-2) {
            if(c[i] == 'A' && c[i+1] == 'A' && c[i+2] == 'A')
                a++;
            if(c[i] == 'B' && c[i+1] == 'B' && c[i+2] == 'B')
                b++;
            i++;
        }
        if(a>b)
            return true;
        return false;
    }
};