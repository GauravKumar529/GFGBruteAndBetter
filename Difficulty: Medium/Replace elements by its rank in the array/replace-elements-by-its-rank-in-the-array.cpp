// User function Template for C++

class Solution {
  public:

    vector<int> replaceWithRank(vector<int> &arr, int N) {
        
        
        int n = arr.size();
        vector<int > res ;
        unordered_map<int  , int >  mpp ;
        vector<int > need (arr.begin() , arr.end());
        sort(need.begin() , need.end());
        int rank = 1 ;
        for(int i = 0; i < need.size() ;i++) {
            if(mpp.find(need[i] ) == mpp.end()) {
                mpp.insert({need[i] , rank});
                
                rank++;
            }
        }
        for(int i = 0; i < arr.size() ;i++) {
            res.push_back(mpp[arr[i]]);
            
        }
        return res ;
        
        
    }
};
