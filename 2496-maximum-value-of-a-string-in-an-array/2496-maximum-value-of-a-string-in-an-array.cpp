class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxi = INT_MIN;
        for(int i = 0; i<strs.size(); i++) {
            int temp = 0; bool flag = false;
            for(int j = 0; j<strs[i].size(); j++) {
                if(strs[i][j] >= 'a' && strs[i][j] <= 'z')
                    flag = true;
            }
            if(flag == true){
                int temp = strs[i].size();
                maxi = max(maxi, temp);
            }
            else
                maxi = max(maxi, stoi(strs[i]));
        }
        return maxi;
    }
};