class Solution {
  public:
    int setKthBit(int n, int k) {
        // Code here
        int  val = 1 << k;
        return (val | n );
    }
};
