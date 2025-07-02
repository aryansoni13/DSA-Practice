class Solution {
  public:
    int solve(vector<int>& arr, vector<bool>& vis) {
        int ans = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                int curr = arr[i];
                int groups = 0;
                while (!vis[curr]) {
                    vis[curr] = true;
                    curr = arr[curr];
                    groups++;
                }
                ans += (groups > 0) ? (groups - 1) : 0;
            }
        }
        return ans;
    }

    int minSwaps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        vector<int> temp(arr.begin(), arr.end());
        sort(temp.begin(), temp.end());
        for (int i = 0; i < n; i++) {
            mp[temp[i]] = i;
        }
        for (int i = 0; i < n; i++) {
            arr[i] = mp[arr[i]];
        }
        vector<bool> vis(n, false);
        return solve(arr, vis);
    }
};