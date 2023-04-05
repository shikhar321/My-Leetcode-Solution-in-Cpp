class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        int finalans = 0;
        int finalanscount = 0;
        for(int i = 1; i<=n; i++) {
            if(i<10 || i == 10000) {
                mp[i]++;
            }
            else if(i>=10 && i<100) {
                int temp = i;
                int ans = i%10 + (i/10);
                mp[ans]++;
            }
            else if(i>=100 && i<1000) {
                int temp = i;
                int ans = i%10 + (i/10)%10 + (i/100);
                mp[ans]++;
            }
            else {
                int ans = i%10 + (i/10)%10 + (i/100)%10 + (i/1000);
                mp[ans]++;
            }
        }
        int maxi = INT_MIN;
        for(auto it:mp) {
            if(it.second > maxi) {
                maxi = it.second;
                finalans = max(maxi, finalans);
            }
        }
        for(auto it:mp) {
            if(it.second == finalans){
                finalanscount++;
            }
        }
        
        return finalanscount;
    }
};