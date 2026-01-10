class Solution {
  public:
   bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

    
    int largestPrimeFactor(int n) {
        // code here
        
        int ans  = -1;
        if(isPrime(n)) return n ;
        
        for(int i =  2 ;i*i <= n;i++) {
            if( n %i == 0  ) {
                if(isPrime(i)) ans  = max(ans  , i) ;
                if(isPrime(n / i)) ans  = max(ans  , n / i);
                
            }

        }
        return ans ;
        
        
    }
};