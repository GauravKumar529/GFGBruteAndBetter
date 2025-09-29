class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n  ==1) return 1 ;
        int cnt = 0;
        cnt  =  towerOfHanoi(n- 1 , from , aux , to) ;
        cnt++;
        cnt += towerOfHanoi(n - 1 , aux , to , from);
        return cnt  ; 
    }
};