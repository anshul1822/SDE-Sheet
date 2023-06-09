//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    int maxDistance(int arr[], int n)
    {
    //Code here
        unordered_map<int,int> mp;
        
        int ans = INT_MIN;
        
        for(int i=0; i<n ;i++){
            
            if(mp.find(arr[i]) == mp.end()) mp[arr[i]] = i;
        }
        
        for(int i=n-1; i>=0; i--){
            
            if(mp.find(arr[i]) != mp.end()){
                
                ans = max(ans, i - mp[arr[i]]);
            }
        }
        
        return ans;
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
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends