class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        int n = a.size();
        int m = b.size();
        
       set<int> c; 
        for(int i = 0; i < n; i++) {
            c.insert(a[i]); 
        }
        for(int j = 0; j < m; j++) { 
            c.insert(b[j]); 
        }
        return c.size();
    }
};