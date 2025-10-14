class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        stack<int> st; 
        vector<int> res ;
        
        for(int  i = n - 1; i>= 0;i--){
            if(i == n  - 1) {
                st.push(arr[i]);
                res.push_back(-1);
            }
            else {
                while(!st.empty() && st.top() <=arr[i]){
                    st.pop();
                }
                if(st.empty()) res.push_back(-1);
                else {
                    res.push_back(st.top());
                }
                st.push(arr[i]);
            }
        }
        reverse(res.begin() , res.end()) ;
        return res ;
        
        
    }
};