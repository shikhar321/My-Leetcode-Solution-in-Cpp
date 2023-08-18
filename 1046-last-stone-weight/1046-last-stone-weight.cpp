class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int i = 0; i<stones.size(); i++) {
            pq.push(stones[i]);
        }
        // 2 2
        int maximum;
        while(pq.size() != 1 && pq.size() != 0) {
            maximum = pq.top();
            pq.pop();
            if(maximum == pq.top()){
                pq.pop();
            }
            else{
                int temp = pq.top();
                pq.pop();
                pq.push(abs(maximum - temp));
            }
        }
        if(pq.size() == 0)
            return 0;
        return pq.top();
    }
};