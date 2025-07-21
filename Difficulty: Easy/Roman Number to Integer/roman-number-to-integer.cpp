class Solution {
  public:
    int romanToDecimal(string &s) {
        // code here
        int ans = 0;
        unordered_map<char ,int > mp;
        mp = {{'I' , 1} , {'V' , 5}, {'X' , 10}, {'L' ,50}, {'C' , 100}, {'D' , 500}, {'M' , 1000}};
        for(int i =0;i<s.size() - 1 ;i++){
            if(mp[s[i]] < mp[s[i+1]])  ans -= mp[s[i]];
            else ans += mp[s[i]];
            
         }
         ans += mp[s.back()];
         return ans;
        
    }
};