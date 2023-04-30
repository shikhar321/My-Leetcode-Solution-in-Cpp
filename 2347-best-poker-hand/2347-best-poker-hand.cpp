class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        int suitcount = 0;
        unordered_map<int, int> mp;
        int size = suits.size();
        int k = 1;
        for(int i = 0; i<size; i++) {
            mp[ranks[i]]++;
            if(suits[i] == suits[k] && k <= size){
                suitcount++;
            }
            k++;
        }
        cout<<suitcount<<endl;
        int current;
        int maxi = INT_MIN;
        for(auto it:mp) {
            current = it.second;
            maxi = max(maxi, current);
        }
        if(suitcount == size-1) return "Flush";
        else if(maxi >= 3)  return "Three of a Kind";
        else if(maxi >= 2)  return "Pair";
        return "High Card";
    }
};