
class Solution {
  public:
   int ncr(int n , int r){
       int res = 1;
       for(int i = 0;i<r;i++){
            res*= (n-i);
            res/= i+1;
       }
       return res;
   }        
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> pascals;
       
        for(int i = 1;i <=n;i++){
            pascals.push_back(ncr(n -1 , i-1));
        }
        return pascals; 
    }
};
