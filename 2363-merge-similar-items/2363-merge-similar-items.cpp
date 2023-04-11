class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> mp;
        vector<vector<int>> answer;
        for(int i = 0; i<items1.size(); i++) {
            mp.insert({items1[i][0], items1[i][1]});
            
        }
        for(int i = 0; i<items2.size(); i++) {
            if(mp.find(items2[i][0]) != mp.end()) {
                mp[items2[i][0]] += items2[i][1];
            }
            else{
                mp.insert({items2[i][0], items2[i][1]});
            }
        }
        
        for(auto it: mp) {
            answer.push_back({it.first, it.second});
        }
        return answer;
    }
};