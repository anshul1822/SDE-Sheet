class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        reverse(nums1.begin(), nums1.begin()+m);
        reverse(nums1.begin(), nums1.end());
        
        int i = n;
        int k = 0;
        int j = 0;
        
        while(i<(m+n) && j<n){
            
            if(nums2[j] < nums1[i]){
                nums1[k] = nums2[j];
                k++; 
                j++;
            }else{
                swap(nums1[k], nums1[i]);
                k++; 
                i++;
            }           
        }
        
        while(k < (m+n) && j<n){
            nums1[k] = nums2[j];
            k++; 
            j++;
        }    
    }

};