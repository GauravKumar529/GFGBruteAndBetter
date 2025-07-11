class Solution {
  public:
    int findOnce(vector<int>& arr) {
        // code here.
        int n = arr.size();
        int num = 0 ;
        for(int i = 0 ;i<n;i++){
            num = num ^ arr[i];
        }
        return  num;
    }
};