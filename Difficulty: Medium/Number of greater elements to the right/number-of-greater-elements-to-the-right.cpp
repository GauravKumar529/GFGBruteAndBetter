
class Solution {
  public:

    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        // code here
        int n  = arr.size();
        vector<int> res;
        int m = indices.size();
        int i = 0;
        while(m--){
            int cnt= 0;
            int val = arr[indices[i]];
            for(int j =  indices[i]; j< n;j++){
                if(arr[j] >   val) cnt++;
            }
            res.push_back(cnt );
            
            i++;
        }
        return res ;
        
        
        
    }
};