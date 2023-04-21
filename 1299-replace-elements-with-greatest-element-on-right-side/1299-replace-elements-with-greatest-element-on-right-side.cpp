class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        if(arr.size() == 1) {
            arr[0] = -1;
            return arr;
        }
        for(int i = arr.size() - 1; i>=1; i--) {
            // [17,18,5,4,6,1]
            //  18,18,6,6,6,1
            if(arr[i-1] < arr[i]) {
                arr[i-1] = arr[i];
            }
        }
        arr.erase(arr.begin(), arr.begin() + 1);
        arr.push_back(-1);
        return arr;    
    }
};