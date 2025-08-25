class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        unordered_map<int, int> mpp;
        int sum =  0;
        int len = 0;
        for(int i = 0;i<n;i++) {
            sum +=arr[i];
            if(sum== k) len = max(len  , i+1);
            
            int ch = sum - k;
            if( mpp.find(ch) !=mpp.end()) {
                len = max(len , i  - mpp[ch]);   
            }
            if(mpp.find(sum) == mpp.end()) mpp[sum] = i;
        }
        return len;
    }
};