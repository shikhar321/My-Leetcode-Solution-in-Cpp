class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int> mp;
        int count0 = 0;
        for(int i = 0; i<arr.size(); i++) {
            if(arr[i] == 0) {
                count0++;
            }
            else{
            mp[arr[i]]++;
            }
        }
        for(int i = 0; i<arr.size(); i++) {
            if(arr[i] == 0 && count0 >=2) {
                return true;
            }
            if(mp.find(arr[i]*2) != mp.end()) {
                
                return true;
            }
        }
        return false;
    }
};