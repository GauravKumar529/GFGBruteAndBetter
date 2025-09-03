class Solution {
  public:
  void reverse(vector<int> &arr ,int i ){
      int n = arr.size();
      if(i >=(n-i - 1) ) return ; 
      swap( arr[i] , arr[n-i -1]);
      reverse(arr, i+1);
     
  }
    void reverseArray(vector<int> &arr) {
        // code here
        reverse( arr ,0);
        return   ; 
    }
};