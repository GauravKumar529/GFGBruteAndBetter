class Solution {
  public:
    int maxDepth(string s) {
        // code here
        int cnt = 0;
        int ans = 0;
        for(int i = 0 ;i<s.size() ;i++){
            if(s[i] == '(') {
                cnt++;
                ans = max(ans, cnt );
            }
            else if(s[i] == ')') cnt--;
        }
        if(cnt!= 0) return -1;
        return ans;
    }
};