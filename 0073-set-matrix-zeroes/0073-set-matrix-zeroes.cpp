class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        bool firstCol = false;

        //maker for 0th column
        for(int i=0; i<n; i++){
            if(matrix[i][0] == 0) firstCol = true;
        }
                        
        //scanning from all except 0th column and marking the corresponding parent
        for(int i=0; i<n; i++){    
            for(int j=1; j<m; j++){
        
                if(matrix[i][j] == 0){                    
                    matrix[i][0] = 0;  //first row marked as 0
                    matrix[0][j] = 0;  //first col marked as 0
                }
            }
        }
        
        //marking the elements accordingly
        for(int i=1; i<n; i++){            
            for(int j=1; j<m; j++){
                
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;                
            }
        }
        
        //for 0th row
        if(matrix[0][0] == 0){
            for(int j=0; j<m; j++) matrix[0][j] = 0;
        }
        
        //for 0th column
        if(firstCol){
            for(int i=0; i<n; i++) matrix[i][0] = 0;
        }

// Edge cases :

// [[1,0]]
// [[1],[0]]

    }
};