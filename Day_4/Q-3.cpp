class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int srow = 0;
        int scol = 0;
        int erow = m - 1;
        int ecol = n - 1;
        while(srow <= erow && scol <= ecol){
            // top
            for(int j=scol; j<=ecol; j++){
                ans.push_back(matrix[srow][j]);
            }
            // right
            for(int i=srow+1; i<=erow; i++){
                ans.push_back(matrix[i][ecol]);
            }
            // bottom
            if(srow < erow){
                for(int j=ecol-1; j>=scol; j--){
                    ans.push_back(matrix[erow][j]);
                }
            }
            // left
            if(scol < ecol){
                for(int i=erow-1; i>srow; i--){
                    ans.push_back(matrix[i][scol]);
                }
            }
            srow++;scol++;erow--;ecol--;
        }

        return ans;
    }
};