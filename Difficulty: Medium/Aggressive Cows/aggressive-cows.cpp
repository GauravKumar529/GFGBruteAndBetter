// User function Template for C++

class Solution {
  public:
  bool canWePlace(vector<int> & arr, int n,int mid, int cows) {
      int cntCows = 1;
      int last = arr[0];
      for(int i = 0;i<n;i++){
          if(arr[i] - last >= mid){
              cntCows++;
              last  = arr[i ];
              
          }
          if(cntCows >= cows) return true;
      }
      return false ;
  }

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin() , stalls.end());
        int minigap = 1;
        int n = stalls.size();
        int maxgap = stalls[stalls.size() - 1] - stalls[0];
        while(minigap <= maxgap) {
            int mid = (minigap + maxgap )  / 2;
            if(canWePlace(stalls, n, mid, k) == true ) {
                minigap  = mid+ 1;
                
            }
            else maxgap = mid- 1;
        }
        return maxgap ;
    }
};