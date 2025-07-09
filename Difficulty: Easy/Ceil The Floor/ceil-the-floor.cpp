// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin() , arr.end());
        int floor = -1;
        int ceil = -1;
        for(int i = 0;i<n;++i){
            if(arr[i] <= x) floor = arr[i];
            if(arr[i] >= x){
                 ceil = arr[i ]; 
                 break;
            }
            
        }
        return { floor ,ceil};
        
        
    }
};