class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //O(N) Hashing        
        
        int n = nums.size();
        
        unordered_map<int,int> mp;
                
        for(int i=0; i<n; i++){
            
            int rem = target - nums[i];
            
            if(mp.find(rem) != mp.end()) return {i, mp[rem]};
            
            mp[nums[i]] = i;
        }
        
        return {-1};
        
    }
};

// Why do we first check the presence of x - arr[i] ? 
// We could have inserted all the elements in first go O(N) time. Then we could have parsed the input array and check the presence of x - arr[i];

// Ans : X = 10 & we have 5 in arr only once
// It will give true, in case we insert all elements before.