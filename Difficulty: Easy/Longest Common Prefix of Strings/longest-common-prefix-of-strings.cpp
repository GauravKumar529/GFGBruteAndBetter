// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin() , arr.end());
        string start = arr[0];
        string  end = arr[arr.size() - 1];
        int idx = 0;
        string ans = "";
        while(idx <= start.size() - 1 && idx <= end.size() - 1){
            if(start[idx]  == end[idx]) ans.push_back(start[idx++]);
            else  break;
        }
        return ans;
    }
};