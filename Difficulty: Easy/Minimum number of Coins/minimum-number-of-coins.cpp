class Solution {
  public:
    int findMin(int n) {
        // code here
        int ans = 0;
        if(n>=10) {
            ans  += n/10;
            n = n %10;
        }
        if(n >=5) {
            ans += n/ 5 ;
            n =n%5 ; 
            
        }
        if(n>=2){
            ans += n/ 2 ;
            n =n%2 ;
            
        }
         if(n >=1) ans++;
        return  ans ;  
        
    }
};