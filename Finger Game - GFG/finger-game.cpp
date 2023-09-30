//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int fingerCount(int N)
    {
        // Write Your Code here
        // 1 = 1 9 17 25        8
        // 2 = 2 8 10 16 18   0/2  
        // 3 = 3 7 11 15 19     4
        // 4 = 4 6 12 14 20 22    
        // 5 = 5 13 21 29       8
        if(N%8 == 1)    return 1;
        else if(N%8 == 0 || N%8 == 2)   return 2;
        else if(N%4 == 3 ||  N == 3)   return 3;
        else if(N%8 == 4 || N%8 == 6)   return 4;
        else
            return 5;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
      
        Solution ob;
        int ans  = ob.fingerCount(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends