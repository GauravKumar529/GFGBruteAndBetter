class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        int  n = arr.size();
        unordered_map<int , int> mpp;
        int k = 0;
        int sum = 0;int len = 0;
        for(int i = 0;i<n;i++) {
            sum += arr[i];
            if(sum == 0) len = max(len , i+1);
            if(mpp.find(sum) != mpp.end()) {
                len = max(len , i - mpp[sum]);
            }
            if(mpp.find(sum) == mpp.end()) mpp[sum] = i;
        }
        return len ; 
        
        
        
    }
};