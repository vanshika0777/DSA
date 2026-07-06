class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);  
            }
        }

        for(int row=0; row<n; row++){
            int i=0;
            int j=n-1;
            for(;j>i;j--){
                swap(matrix[row][i], matrix[row][j]);
                i++;
                
            }
        }
    }
};