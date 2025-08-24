class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size() ;
        
        set<vector<int>> st ;
        for(int i = 0;i < n;i++){
            unordered_map<int,int > mpp;
            for(int j  = i+1;j<n;j++){
                for(int val = j+2;val < n;val++) mpp[nums[val]]++;
                for(int k = j+1;k<n;k++){
                    int num = target  - (nums[i] +nums[j] + nums[k]) ;
                    if(mpp.find(num ) != mpp.end()) {
                        vector<int> temp  = {nums[i] , nums[j] , nums[k] , num};
                        sort(temp.begin() , temp.end()) ;
                        st.insert(temp);
                    }
                    mpp.erase(nums[k+1] );   
                }
            }
        }
        vector<vector<int>> res(st.begin() , st.end()) ;
        return res   ;   
    }
};
