class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        vector<vector<int>> newmat(n , vector<int> (n));
        for(int i = 0;i<n;++i){
            for(int j = 0;j<n;++j){
                newmat[i][j]  = mat[j][n-1-i];
            }
        }
        mat = newmat;
        return ;
        
    }
    
};
