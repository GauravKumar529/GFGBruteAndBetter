class Solution {
  public:
  static bool comp(pair<int,int> &a , pair<int,int> &b){
      if(a.first/(double) a.second > b.first / (double)b.second) return true ;
      else return false ; 
  }
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int  n = val.size();
        vector<pair<int , int >> v;
        for(int i = 0 ;i<n;i++) v.push_back({val[i], wt[i]});
        long double ans = 0.000000;
        long long  cap  =  capacity ;
        sort(v.begin() , v.end() , comp);
        for(int i =  0 ;i<n ;i++) {
            if(v[i].second <= cap)  {
                ans += (double)v[i].first;
                cap -= v[i].second;
            }
            else {
                ans += (v[i].first / (double)v[i].second) * cap ; 
                break ;
            }
        }
        return  ans ;
        
        
    }
};
