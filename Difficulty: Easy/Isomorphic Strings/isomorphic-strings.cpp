
class Solution {
public:
    bool areIsomorphic(string s1, string s2) {
        if (s1.length() != s2.length()) return false;

        int map1[256] = {0}; 
        int map2[256] = {0};
        for (int i = 0; i < s1.length(); i++) {
            char c1 = s1[i];
            char c2 = s2[i];

            // Compare last seen positions
            if (map1[c1] != map2[c2]) return false;

            // Update positions with i + 1 and keep it 
            map1[c1] = i + 1;
            map2[c2] = i + 1;
        }

        return true;
    }
};
