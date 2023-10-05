class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int a = 0;
        int b = 0;
        for(int i = 0; i<moves.size(); i++) {
            if(moves[i] == 'R') {
                a++;
                b++;
            }
            if(moves[i] == 'L') {
                a--;
                b--;
            }
            if(moves[i] == '_') {
                a++;
                b--;
            }
        }
        return max(abs(a), abs(b));
    }
};