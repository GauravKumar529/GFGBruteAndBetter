class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> st ;
        int n = s.size();
        for(int i = 0 ; i < n;i++){
            if(  s[i] == '[' || s[i] == '(' || s[i] == '{') st.push(s[i]);
            else {
                if(st.empty()) return false;
                else {
                    if(s[i] == ']' && st.top() == '[') st.pop();
                    else if(s[i] == ')' && st.top() == '(') st.pop();
                    else if(s[i] == '}' && st.top() == '{') st.pop();
                    else return false ;
                }
            }
        }
        return  st.empty() ;
        
    }
};