class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int i = 0, j = m-1;
        int count = 0;
        
        while(i<n){
            
            j = m-1;
            
            while( j>=0 && grid[i][j] < 0){
                count++;
                j--;
            }
            
            i++;
        }
        
        return count;
    }
};