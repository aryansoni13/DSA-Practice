// User function Template for C++
class Solution {
  public:
    int cost(vector<int>& arr) {
        // code here
        int n = arr.size();
        if(n==1) return 0;
        
        int mini = *min_element(arr.begin(), arr.end());
        return mini*(n-1);
        
    }
};