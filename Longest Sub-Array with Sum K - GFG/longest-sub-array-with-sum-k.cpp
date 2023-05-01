//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int maxlen = 0;
        int prefixsum = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i<N; i++) {
            prefixsum += A[i];
            // Agar nahi mila toh map mai daal do
            if(mp.find(prefixsum) == mp.end()) {
                mp[prefixsum] = i;
            }
            // Agar prefix sum hi K se equal hai
            if(prefixsum == K) {
                maxlen = max(maxlen, i+1);
            }
            // Agar pehle se exist kerta hai map mai
            if(mp.find(prefixsum - K) != mp.end()) {
                int len = i - mp[prefixsum-K];
                maxlen = max(maxlen, len);
            }
            
        }
        return maxlen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends