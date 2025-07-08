// User function Template for C++
class Solution {
  public:
  int f(vector<int> &arr , int low ,int high , int target ,int ans ){
      if(low> high ) return ans;
      int mid = low+(high - low) / 2;
      if(arr[mid] < target) return  f(arr, mid+1 , high, target , ans);
      else  {
          ans = mid;
          return f(arr , low , high - 1, target , ans);
      }
  }
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int ans = n;
       int num =  f(arr,  0 , n- 1, target, ans);
       return num;
       
        
        
    }
};
