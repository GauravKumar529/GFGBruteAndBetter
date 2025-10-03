class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool cmp(pair<int, int>a, pair<int, int>b){
        if(a.second <  b.second) return true ;
        else return false ; 
    }
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int n = start.size() ;
        vector<pair<int, int >>v ;
        for(int i = 0 ; i< n;i++) {
            v.push_back({start[i] , end[i]});
        }
        int cnt = 1;
        sort(v.begin() , v.end() , cmp);
        int num =  v[0].second ; 
        for(int i = 1; i< n;i++){
            if(v[i].first > num ){
                cnt++;
                num = v[i].second ;
            } 
        }
        return cnt ; 
        
 
    }
};