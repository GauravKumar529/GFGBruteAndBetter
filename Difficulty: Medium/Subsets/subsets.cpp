class Solution {
  public:
  using vii  = vector<vector<int>> ;
  using vi = vector<int> ;
  
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        int n = arr.size();
        vii res  ;
        int total = 1 << n ;
        for(int i = 0; i < total ;i++ ){
            vi ans ;
            for(int j = 0;  j < n ;j++) {
                if(i & (1<< j)) {
                    ans.push_back(arr[j]);
                    
                }
            }
            res.push_back(ans );
            
        }
        return res ;
        
    }
};