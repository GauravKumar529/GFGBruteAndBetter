// User function Template for C++

class Solution {
  public:
  vector<string > res ; 
  void fun (int num , string s , char lastDigit) {
      if(num == s.size()) {
          res.push_back(s) ;
          return  ; 
      }
      fun(num , s + "0" , '0');
      if(lastDigit != '1') fun( num , s+ "1"  , '1') ;
      return; 
  }
    vector<string> generateBinaryStrings(int num) {
        // Write your code
        fun(num , "" , '0');
        return res   ; 
        
    }
};