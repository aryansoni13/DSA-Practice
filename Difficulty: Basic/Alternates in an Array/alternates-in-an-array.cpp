class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> alternates;
        for(int i = 0; i <n;i+=2){
            alternates.push_back(arr[i]);
        }
        return alternates;
    }
};