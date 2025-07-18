class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        string temp = "";
        vector<string > v;
        for(char it: s){
            if(it!= '.') temp.push_back(it);
            else if(!temp.empty()){
                v.push_back(temp);
                temp = "";
            }
        }
        if(!temp.empty()) v.push_back(temp);
        reverse(v.begin()  , v.end());
        string res = "";
        for(int i = 0;i<v.size() ;i++) {
            res += v[i];
            if(i != v.size() - 1) res += '.';
        }
        return res;
    }
};