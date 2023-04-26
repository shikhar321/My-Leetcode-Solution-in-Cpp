class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // i             k j
        // 1 2 3 4 5 6 7 8 9

        // 9 8 1
        // 7 6 2
        // 5 4 3
        int answer = 0;
        sort(piles.begin(), piles.end());
        int i = 0;
        int j = piles.size()-1;
        int k = piles.size()-2;
        while(i<k) {
            answer += piles[k];
            i++;
            j -= 2;
            k -= 2;
        }
        return answer;
    }
};