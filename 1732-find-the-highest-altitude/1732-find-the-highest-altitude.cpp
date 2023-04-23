class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // int current = 0;
        int maxi = max(gain[0], 0);
        for(int i = 0; i<gain.size()-1; i++) {
            gain[i+1] += gain[i];
            maxi = max(gain[i+1], maxi);
        }
        // for(int i = 0; i<gain.size(); i++) {
        //     cout<<gain[i]<<endl;
        // }
        return maxi;

    }
};