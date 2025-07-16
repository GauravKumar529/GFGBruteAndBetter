// User function template for C++
class Solution {
  public:
  int lower_bound(vector<int > arr ,int m,  int x){
      int low = 0;
      int high = m- 1;
     // int ans = -1;
      while(low <= high ) {
          int mid = (low + high) / 2;
          if(arr[mid] >= x){
              high = mid -1;
          }
          else low = mid+1;
      }
      return low;   
  }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n  = arr.size();
        int m = arr[0].size();
        int ans = -1;
        int idx = -1;
        for(int  i = 0;i<n;i++)  {
            int cnt_ones  =  m - lower_bound(arr[i] ,m, 1 );
            if(cnt_ones > ans) {
                ans = cnt_ones ;
                idx = i;
            }
        }
        return idx;
    }
};