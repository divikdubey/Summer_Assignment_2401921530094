class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       int sum=0;
       int n=mat.size();
       //Sum of diagonal elements
       for(int i=0;i<n;i++){
           sum+=mat[i][i];
           sum+=mat[i][n-i-1];
       } 
       //check if matrix is odd
       if(n%2!=0){
        //subtract the overlapping element
         sum-=mat[n/2][n/2];
       }
       return sum;
    }
};