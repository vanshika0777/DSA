class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;

        int top=0;
        int bottom=row-1;
        int left=0;
        int right=col-1;
        while(count<total){
            //top row
            for(int col=left; col<=right; col++){
                ans.push_back(matrix[top][col]);
                count++;
                
            }
                top++;
            //right column
            for(int row=top; row<=bottom; row++){
                
                    ans.push_back(matrix[row][right]);
                    count++; 
            }
            right--;

            //bottom row
            if(top<=bottom){
            for(int col=right; col>=left; col--){
                
                ans.push_back(matrix[bottom][col]);
                count++;
            }
            bottom--;
        }

            //left column
            if(left<=right){
            for(int row=bottom; row>=top;row--){
               
                ans.push_back(matrix[row][left]);
                count++;
            }
            left++;
        }
        }
        return ans;
        
    }
};