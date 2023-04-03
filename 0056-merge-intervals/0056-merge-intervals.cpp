class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> answer;
        sort(intervals.begin(), intervals.end());
        // for(int i = 0; i<intervals.size(); i++) {
        //     cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        // }
        int i = 0;
        int j = 1;
        while(j<intervals.size()) {
            if(intervals[i][1] >= intervals[j][0]) {
                cout<<"i";
                intervals[i][1] = max(intervals[i][1], intervals[j][1]);
                j++;
            }
            else{
                cout<<"o";
                answer.push_back({intervals[i][0], intervals[i][1]});
                i = j;
                j++;
            }
        }
        answer.push_back({intervals[i][0], intervals[i][1]});
        return answer;
    }
};