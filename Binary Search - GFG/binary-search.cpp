//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearchhelp(int arr[], int k, int start, int end) {
    if(start <= end) {
        int mid = (start+end)/2;
        if(arr[mid] == k)
            return mid;
        else if(arr[mid] > k)
            return binarysearchhelp(arr, k, start, mid-1);
        else
            return binarysearchhelp(arr, k, mid+1, end);
    }
    return -1;
}
    int binarysearch(int arr[], int n, int k) {
        // code here
        int start = 0;
        int end = n-1;
        return binarysearchhelp(arr, k, start, end);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends