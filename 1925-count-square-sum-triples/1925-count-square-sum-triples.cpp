class Solution {
public:
    int countTriples(int n) {
        // 5. 3 4 5        2
        // 10. 6 8 10      4
        // 20. 12 16 20    6
        // 40. 24 32 40    8
        // 80. 48 64 80    10
        // 160.            12
        // 320.            14
        vector<int> v;
        int ans = 0;
        unordered_map<int, int> mp;
        for(int i = 1; i<=n; i++) {
            v.push_back(i);
            mp[i*i]++;
        }
        for(int i = 0; i<v.size(); i++) {
            for(int j = 0; j<v.size(); j++) {
                if(i!=j) {
                    int temp = v[i]*v[i] + v[j]*v[j];
                    if(mp.find(temp) != mp.end()){
                        // cout<<v[i]<<" "<<v[j]<<" "<<sqrt(temp)<<endl;
                        ans++;
                    }
                }
            }
        }
        return ans;

    }
};