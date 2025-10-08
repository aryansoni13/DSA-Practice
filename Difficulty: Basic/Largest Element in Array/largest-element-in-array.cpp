class Solution {
  public:
    int largest(vector<int> &arr) {
        int largestNumber = arr[0];
        int n = arr.size();
        for(int i =0 ; i<n;i++){
            if(arr[i]>largestNumber){
                largestNumber = arr[i];
            }
        }
        return largestNumber;
    }
};
