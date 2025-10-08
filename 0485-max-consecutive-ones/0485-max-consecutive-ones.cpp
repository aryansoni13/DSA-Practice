class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0, maxCount = 0;
        for(int num:nums){
            if (num == 1){
                count++;
                maxCount = max(count,maxCount);
            }
            else {
                count = 0;
            }
        }
        return maxCount;
    }
};