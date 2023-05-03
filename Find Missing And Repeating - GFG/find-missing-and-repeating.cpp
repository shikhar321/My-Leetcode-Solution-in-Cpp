//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        unordered_map<int, int> mp;
        int *arrsol = new int[2];
        long long int sum = 0;
        for(int i = 0; i<n; i++) {
            if(mp.find(arr[i]) != mp.end()) {
                arrsol[0]=arr[i];
            }
            mp[arr[i]]++;
            sum += arr[i];
        }
        long long int multiply = (n+1);
        long long int actualsum = n*multiply/2;
        arrsol[1] = (arrsol[0] + actualsum - sum);
        return arrsol;    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends