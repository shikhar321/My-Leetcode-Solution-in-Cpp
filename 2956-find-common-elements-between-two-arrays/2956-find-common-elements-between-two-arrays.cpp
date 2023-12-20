class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        vector<int> ans;
        for(int i = 0; i<nums1.size(); i++)
            mp1[nums1[i]]++;
        for(int i = 0; i<nums2.size(); i++)
            mp2[nums2[i]]++;
        int a = 0, b = 0;
        for(int i = 0; i<nums1.size(); i++) {
            if(mp2.find(nums1[i]) != mp2.end())
                a++;
        }

        for(int i = 0; i<nums2.size(); i++) {
            if(mp1.find(nums2[i]) != mp1.end())
                b++;
        }
        return {a,b};
    }
};