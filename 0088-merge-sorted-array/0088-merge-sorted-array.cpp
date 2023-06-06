class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        int i = m - 1; // Pointer for nums1
        int j = n - 1; // Pointer for nums2
        int k = m + n - 1; // Pointer for merged elements in nums1

        while (j >= 0) {
        
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i]; // Place larger element from nums1 at the end of nums1
                i--;
            
            } else {
                nums1[k] = nums2[j]; // Place element from nums2 at the end of nums1
                j--;            
            }
            
            k--;        
        }      
    }

};

//Optimal Space Approach