class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int  n = arr.size();
        int curcnt = 1;
        int longest = 1;
     //   int lastele = 0;
        sort(arr.begin() , arr.end());
        for(int i = 1;i<n;i++){
            if(arr[i] == arr[i-1] +1){
                curcnt++;
             //   lastele = arr[i-1];
            }
            else if(arr[i] == arr[i-1]) continue;
            else {
                curcnt = 1;
               // lastele = arr[i-1];
            }
            longest = max(longest ,  curcnt);
            
        }
        return longest;
        
        
        
    }
};