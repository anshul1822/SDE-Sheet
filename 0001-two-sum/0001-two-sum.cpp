class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        vector<pair<int,int>> mp(n);
        
        for(int i=0; i<n; i++){
            mp[i] = {nums[i], i};
        }
        
        sort(mp.begin(), mp.end());
        
        int i = 0, j = nums.size()-1;
        
        while(i<j){
            
            if(mp[i].first + mp[j].first == target) return {mp[i].second, mp[j].second};
            else if(mp[i].first + mp[j].first < target) i++;
            else j--;
        }
        
        return {-1};
    }
};