class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n= arr.size();
        int i = 0;
        for(int j = i+1; j < n; j++){
            if(i< n && arr[i] > arr[j]){
                return false;
            } else{
                i++;
            }
        }
        return true;
    }
};