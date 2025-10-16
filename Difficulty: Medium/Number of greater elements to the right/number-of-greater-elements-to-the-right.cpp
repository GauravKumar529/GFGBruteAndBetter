
class Solution {
  public:

    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        // code here
        vector<int > res;
        int n = arr.size();
        int m =indices.size();
        int j = 0;
        while(m--){
            int cnt =0 ;
            int i;
            for(i = 0 ; i < n;i++){
                if(arr[i] == indices[j]) break;
            }
            for(int  k = i+1 ; k< n;k++){
                if(arr[k] > indices[j]) cnt++;
            }
            res.push_back(cnt);
            j++;
        }
        return res ;
        
        
        
    }
};