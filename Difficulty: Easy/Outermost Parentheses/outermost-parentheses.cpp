class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        int cnt = 0;
        string ans =  " ";
        for(char it: s) {
            if(it == '('){
                if(cnt > 0) ans.push_back(it);
                cnt++;
            }
            else {
                cnt--;
                if(cnt > 0) ans.push_back(it);
            }
        }
        return ans;
    }
};