class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        auto it = unique(arr.begin(), arr.end());
        arr.erase(it, arr.end());
        return arr;
    }
};