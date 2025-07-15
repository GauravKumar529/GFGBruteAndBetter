class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        int n  = a.size();
        int m = b.size();
        int i = 0;
        int j = 0;
        vector<int> v;
        while(i<n && j< m) {
            if(a[i ] < b[j]) v.push_back(a[i++]);
            else v.push_back(b[j++]);
        }
        while(i<n) {
            v.push_back(a[i++]);
        }
        while(j<m) {
            v.push_back(b[j++]);
        }
        int mid = v.size() / 2;
        if(v.size() %2  == 1) return v[mid];
        else return(v[mid - 1] + v[mid]) / 2.0;
        
    }
};