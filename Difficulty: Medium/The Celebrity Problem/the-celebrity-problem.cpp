class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here4
        int n = mat.size();
        
        int top = 0;
        int bottom = n-  1;
        while(top< bottom){
            if(mat[top][bottom] == 1 ) top++;
            else if(mat[bottom][top] == 1) bottom--;
            else {
                top++;
                bottom--;
            }
        }
        if(top > bottom) return -1;
        top = bottom ;
        for(int i = 0; i< n;i++){
            if(top == i ) continue ;
            else if(mat[top][i] == 0 && mat[i][top] == 1) continue ;
            else return -1;
        }
        return top;
        
        
        
        
    }
};