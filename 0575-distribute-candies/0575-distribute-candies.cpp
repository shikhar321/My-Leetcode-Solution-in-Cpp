class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int answer = 0;
        int allowed = candyType.size()/2;
        set<int> s;
        for(int i = 0; i<candyType.size(); i++) {
            s.insert(candyType[i]);
        }
        int sizeofs = s.size();
        answer = min(sizeofs, allowed);
        return answer;
    }
};