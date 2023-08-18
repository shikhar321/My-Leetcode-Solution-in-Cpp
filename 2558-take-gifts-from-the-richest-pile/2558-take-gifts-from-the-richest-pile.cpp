class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(int i = 0; i<gifts.size(); i++) {
            pq.push(gifts[i]);
        }
        // 100 64 25 9 4        4
        // 64 25 10 9 4         3
        // 25 10 8 9 4          2
        // 10 8 9 5 4           1
        // 9 8 5 4 3            0
        while(k != 0){
            int check = pq.top();
            pq.pop();
            pq.push(floor(sqrt((double) check)));
            k--;
        }
        long long temp = 0;
        while(pq.size() != 0) {
            temp += pq.top();
            pq.pop();
        }
        return temp;
    }
};