class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n = arr.size();
        
        for(int i = 0;i<n;i++){
            sort(arr.begin(), arr.end());
            return arr[n-1];
        }
    }
};
