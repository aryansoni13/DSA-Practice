class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(),nums1.end());
        int m = nums1.size();
        double median;
        if(m%2==0){//even number 3,5,7...
          median = (nums1[(m/2-1)]+nums1[m/2]);
          median = median/2;
        }else{//odd
         median = nums1[m/2];
        }
        return median;

    }
};