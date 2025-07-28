class Solution {
  public:
  void  mergeArray (vector<int > & arr, int low ,int high , int mid) {
      vector<int > temp ;
      int left = low;
      int right = mid+1;
      while(left <= mid&& right <=high) {
          if(arr[left] < arr[right ] ) temp.push_back(arr[left++]);
          else temp.push_back(arr[right++]);
          
      }
      while(left<= mid)  temp.push_back(arr[left++]);
      while(right <= high) temp.push_back(arr[right++]);
      for(int i = low;i<=high ;i++) {
          arr[i] = temp[i-low];
      }
      return; 
  } 
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        int mid = (l+r) / 2;
        if(l >= r) return ;
        mergeSort( arr, l , mid);
        mergeSort(arr, mid+1 , r);
        mergeArray(arr, l, r, mid);
    }
};