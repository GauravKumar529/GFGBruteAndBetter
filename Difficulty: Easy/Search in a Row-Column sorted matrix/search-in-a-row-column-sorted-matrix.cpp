// User function template for C++
class Solution {
  public:
  bool searchElement(vector<int> &arr, int m,int target   ){
      int low = 0;
      int high = m - 1;
      while(low <= high) {
          int mid = (low + high) / 2;
          if(arr[mid] == target ) return true ;
          else if(arr[mid] < target ) low = mid+1;
          else high = mid - 1;
          
      }
      return false ;
      
  }
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<n;i++)   {
            if(searchElement(mat[i] , m, x)  == true) return true;
            
        }
        return false ;
        
    }
};