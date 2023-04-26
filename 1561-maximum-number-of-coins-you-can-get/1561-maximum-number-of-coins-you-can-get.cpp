class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int size = piles.size();
        int answer = 0;
        int i = size - 2;
        int j = 1;
        while(j <= size/3) {
            answer += piles[i];
            i -= 2;
            j++;
        }
        return answer;
    }
};