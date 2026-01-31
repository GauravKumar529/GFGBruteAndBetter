class Solution {
  public:
    vector<string> binstr(int n) {
        // code here
        vector<string  > res ;
        
        for(int i = 0; i < (1<< n) ;i++) {
            // res.push_back();
            string s = "";
            
            for(int bit = n - 1 ;bit>= 0 ;bit--) {
                s += char('0' +  ((i>> bit ) & 1 ));
            }
            res.push_back(s);
        }
        return res ;
        
        
    }
};