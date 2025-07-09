class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n   = arr.size();
        auto  lb = lower_bound(arr.begin() , arr.end() ,  x);
        auto  ub  = upper_bound(arr.begin() , arr.end() , x);
        int first = lb  - arr.begin();
        int last = ub - arr.begin() - 1;
        if(*(lb) != x ||lb == arr.end() ) return {-1, -1};
        return {first , last };
    }
};