class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int n  = s.size();
        int i =0;
        int j = n - 1;
        while(i<=j) {
        if(s[i] == s[j]) {
            i++;
            j--;
        }
        else  return false ;
        }
        return true;
       
    }
   
};