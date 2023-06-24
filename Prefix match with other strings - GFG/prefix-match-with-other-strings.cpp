//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        string temp = "";
        int count = 0;
        for(int i = 0; i<k; i++) {
            temp += str[i];
        }
        int check = temp.size();
        for(int i = 0; i<n; i++) {
            bool flag = false;
            for(int j = 0; j<check; j++) {
                if(temp[j] != arr[i][j])    flag = true;
            }
            if(flag == false)   count++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends