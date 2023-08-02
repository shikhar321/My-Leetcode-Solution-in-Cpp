class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int i = 0;
        int j = 1;
        int curr = releaseTimes[0];
        char ans = keysPressed[0];
        while(j<releaseTimes.size()) {
            if(curr < (releaseTimes[j] - releaseTimes[i])) {
                ans = keysPressed[j];
                curr = releaseTimes[j] - releaseTimes[i];
            }
            else if(curr == (releaseTimes[j] - releaseTimes[i])) {
                ans = max(ans, keysPressed[j]);
            }
            i++;
            j++;
        }
        return ans;
    }
};