class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<bool> v(n+1 , true );
        v[0] = false ;
        v[1] = false ;
        for(int i = 2;i*  i <=n;i++) {
            if(v[i ] == true ) {
                for(int j = i*i;j<=n;j +=i){
                    v[j] = false ;
                }
            }
        }
        vector<int > vec ;
        for(auto i = v.begin() ; i != v.end() ;i++) {
            if(*(i) ==true ) vec.push_back(i - v.begin());
        }
        return vec;
    }
};
 // focised on stl based question 