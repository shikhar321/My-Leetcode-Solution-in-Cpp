class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int i = 0;
        vector<int> ans;
        while(i<mountain.size()-2){
            if(mountain[i+1] > mountain[i] && mountain[i+1] > mountain[i+2])
                ans.push_back(i+1);
                i++;
        }
        return ans;
    }
};