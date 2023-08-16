#define ll long long
class Solution {
public:
    ll calculatetime(ll mid, vector<int>& piles) {
        ll int totaltime = 0;
        for(ll i = 0; i<piles.size(); i++) {
            totaltime += ceil((double) piles[i]/ (double) mid);
            // totaltime += ceil(double(piles[i]/mid));
        }
        return totaltime;
    }
    int binarysearch(ll low, ll high, ll h, vector<int>& piles) {
        if(high >= low) {
            ll mid = low + (high - low)/2;
            if(calculatetime(mid, piles) <= h){
                return binarysearch(low, mid-1, h, piles);
            }
            else
                return binarysearch(mid+1, high, h, piles);
        }
        return low;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // Calculating maximum element
        int max_element = INT_MIN;
        for(ll i = 0; i<piles.size(); i++) {
            max_element = max(max_element, piles[i]);
        }
        return binarysearch(1, max_element, h, piles);
    }
};