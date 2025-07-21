class Solution {
  public:
    int countSubstring(string s) {
        // Code here
         int n = s.size();
        int freq[3] = {0}; // Count of 'a', 'b', 'c'
        int left = 0, ans = 0;

        for (int right = 0; right < n; right++) {
            freq[s[right] - 'a']++;

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                ans += (n - right);
                freq[s[left] - 'a']--;
                left++;
            }
        }

        return ans;
    }
};