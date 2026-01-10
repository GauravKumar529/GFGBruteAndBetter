// User function Template for C++

class Solution {
  public:
  int function(int n ) {
    //   int/ ans   = 0;
      if( n% 4 == 1 ) return  1;
      if(n%4 ==2) return n+1;
      if(n% 4  == 3) return 0 ;
      if(n %4 == 0) return n ;
  }
  
    int findXOR(int l, int r) {
        // complete the function here
        int a =  function( l - 1);
        int b = function(r);
        return (a^  b);  
        
        
    }
};