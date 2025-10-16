class Solution {
  public:
    vector<int> nextSmallerEle(vector<int>& arr) {
        //  code here
        int n  = arr.size();
        vector<int> res;
        stack<int> st;
        for(int i = n- 1; i>= 0;i--){
            if(!st.empty() && st.top() < arr[i]) res.push_back(st.top());
            else {
                while(!st.empty() && st.top()>= arr[i]) st.pop();
                res.push_back(st.empty() ? -1 : st.top()) ;
            }
            st.push(arr[i]);
            
        }
        reverse(res.begin() , res.end());
        return res ;
        
    }
};