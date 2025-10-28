class Solution {
  public:
  vector<int> getNSL(vector<int> & arr , int n ) {
      vector<int> res(n);
      stack<int> st ;
      for(int i = 0; i< n;i++) {
          if(st.empty() ) res[i] = -1;
          else {
              while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
              res[i] = st.empty()? -1: st.top();
          }
          st.push(i);
      }
      return res ;
  }
  vector<int> getNSR(vector<int> & arr , int n ) {
      vector<int> res(n);
      stack<int> st ;
      for(int i = n-1; i>=0;i--) {
          if(st.empty() ) res[i] = n;
          else {
              while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
              res[i] = st.empty()? n: st.top();
          }
          st.push(i);
      }
      return res ;
  }
    int getMaxArea(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> NSL = getNSL(arr, n );
        vector<int> NSR = getNSR(arr, n );
        long long sum =0;
        
        for(int i = 0; i < n;i++) {
            int  total  = NSR[i] - NSL[i] - 1 ;
            
            sum = max((int) sum  , (int )(arr[i] * total) );
        }
        return sum ;
        
        
        
        
    }
};
