// User function template for C++
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // code here
        
        
        int n  = arr.size();
        int res  = 0;
        for(int i = 0; i < n;i++) {
            res = res^ arr[i];
        
        }
        
        return res ;
        
    }
};