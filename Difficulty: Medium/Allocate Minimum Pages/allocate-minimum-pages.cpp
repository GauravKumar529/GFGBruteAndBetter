class Solution {
public:
    int checkAllocate(vector<int> &arr, int maxPages) {
        int sum = 0;
        int cnt = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxPages) return INT_MAX; // if nobody assigns 
            
            sum += arr[i];
            if (sum > maxPages) {
                cnt++;
                sum = arr[i];
            }
        }
        return cnt;
    }

    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if (n < k) return -1;

        int low = *max_element(arr.begin(), arr.end());
        int high = accumulate(arr.begin(), arr.end(), 0);
        int ans = -1;

        while (low <= high) {
            int pages = (low + high) / 2;

            if (checkAllocate(arr, pages) <= k) {
                ans = pages;         // store possible answer
                high = pages - 1;    // try to find a better (smaller) one
            } else {
                low = pages + 1;     // increase page limit
            }
        }

        return ans;
    }
};
