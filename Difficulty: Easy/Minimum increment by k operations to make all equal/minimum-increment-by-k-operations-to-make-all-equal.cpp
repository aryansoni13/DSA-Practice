class Solution {
  public:
    // Function to find minimum operations to make all elements equal.
    int minOps(vector<int> arr, int k) {
        // Your code here
        int maxVal = *max_element(arr.begin(), arr.end());
        int res = 0;

        for (int x : arr) {
            if ((maxVal - x) % k != 0)
                return -1;
                res += (maxVal - x) / k;
        }
        return res;
    }
};