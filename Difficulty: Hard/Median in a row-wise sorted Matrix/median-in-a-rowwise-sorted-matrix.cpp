// User function template for C++

class Solution {
  public:
  int mini(vector<vector<int>> & arr, int col){
      int miniEle = arr[0][0];
      for(int i = 1;i < arr.size();i++){
          if(arr[i][col] < miniEle) miniEle = arr[i][col];
      }
      return miniEle;
  }
  int maxi(vector<vector<int>> & arr, int col){
      int maxiEle = -1;
      for(int i = 0 ;i < arr.size();i++){
          if(arr[i][col] > maxiEle) maxiEle = arr[i][col];
      }
      return maxiEle;
  }
  int upper_bound(vector<int> arr , int target  ) {
      int low  = 0 ;
      int high = arr.size() - 1;
      while(low <= high) {
          int mid = (low+ high) / 2;
          if(arr[mid] > target ) high = mid - 1;
          else low = mid+1;
          
      }
      return low;
  }
  int AukatKeAnder(vector<vector<int>> &arr, int target ,int m,int n ) {
      int cnt = 0;
      for(int i = 0;i< n;i++) {
          cnt += upper_bound(arr[i] , target);
      }
      return cnt ;
      
  }
    int median(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        int low = mini(mat , 0 );
        int high = maxi(mat , m -1);
        int req = (m*n) / 2;
        while(low <= high ) {
            int mid = (low + high) / 2;
            int cntElement = AukatKeAnder(mat , mid , m , n);
            if(cntElement <= req) low = mid+ 1;
            else high = mid - 1;
            
        }
        return low;
    }
};
